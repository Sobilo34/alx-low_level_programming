#include "elf.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

void check_my_elf(unsigned char *e_ident);
void print_the_magic(unsigned char *e_ident);
void class_printer(unsigned char *e_ident);
void data_print(unsigned char *e_ident);
void to_print_version(unsigned char *e_ident);
void prints_abi(unsigned char *e_ident);
void prints_osbi(unsigned char *e_ident);
void types_printer(unsigned int e_type, unsigned char *e_ident);
void close_my_elf(int elf);


/**
 * check_my_elf - This is to check if a file is an ELF file or not
 * @e_id: This serves as a ponter to an array containing the ELF magic numbers
 * Description: If the file is no an ELF file the code is 98
 */
void check_my_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 &&
		e_ident[index] != 'E' &&
		e_ident[index] != 'L' &&
		e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: NOt an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_the_magic - This will print the magic numbers of an ELF header
 * @e_ident: This serves as a ponter to an array containing the ELF magic numbers
 * Description: The magic file numbers will be separated with spaces
 */
void print_the_magic(unsigned char *e_ident)
{
	int index;

	printf(" Magic: ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%2x", e_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * class_printer - To print the class of an ELF header
 * @e_ident: This is the pointer to an array containing the ELF class
 */
void class_printer(unsigned char *e_ident)
{
	printf(" class: ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * data_print - To print the data of an ELF header
 * @e_ident: The pointer to the array containing the ELF class
 */
void data_print(unsigned char *e_ident)
{
	printf(" Data: ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * to_print_version - It is to print the version of an ELF header
 * @e_ident: This is a pointer to an array containing the Elf version
 */
void to_print_version(unsigned char *e_ident)
{
	printf(" Version: %d",
			e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * prints_osbi - This is to print the OS/ABI of an ELF eader
 * @e_ident: This is a pointer to an array containing the version
 */
void prints_osbi(unsigned char *e_ident)
{
	printf("OS/ABI: ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * prints_abi - To print the ABI version of an ELF header
 * @e_ident: A pointer to an array containing the ABI version
 */
void prints_abi(unsigned char *e_ident)
{
	printf(" ABI Version: %d\n",
		e_ident[EI_ABIVERSION]);
}

/**
 * types_printer - This prints the type of an ELF header
 * @e_type: The ELF type
 * @e_ident: A pointer pointing to an array containing the ELF class
 */
void types_printer(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf(" Type: ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * close_elf - This is to close ELF files
 * @elf: The file descriptor of the ELF file
 *
 * Descriptor: If the file cannot be closed - exit code is 98
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * print_entry - prints the entry point of an ELF header
 * e_entry: The address of the ELF entry containing the ELF class
 * e_ident: A pointer to an array containing the ELF class
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("Entry point address: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF0) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}


/**
 * main - Displays the information contained int the
 * ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success
 * Description: If the file is not an ELF file or
 * the function fails - exit code i 98
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: '%s' : No such file\n", argv[1]);
		exit(98);
	}

	check_my_elf(header->e_ident);
	printf("ELF HEADER:\n");
	print_the_magic(header->e_ident);
	class_printer(header->e_ident);
	data_print(header->e_ident);
	to_print_version(header->e_ident);
	prints_osbi(header->e_ident);
	prints_abi(header->e_ident);
	types_printer(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(o);
	return (0);
}
