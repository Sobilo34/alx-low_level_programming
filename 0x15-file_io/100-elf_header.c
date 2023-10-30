#include "main.h"

/**
 * exit_and_error - This is a function that writes message to stderr
 * and exits with error code
 * @code: error code
 * @message: error message
 */
void exit_and_error(int fnc, const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(fnc);
}

/**
 * display_info - displays the information contained in the
 * ELF header at the start of an ELF file.
 * @elf_header: elf_header
 */
void display_info(const Elf64_Ehdr *elf_header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header->e_ident[i]);
		if (i < EI_NIDENT - 1)
			printf( " ");
	}
	printf("\n");

	printf("  Class:                             %s\n",
	       elf_header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n",
	       elf_header->e_ident[EI_DATA] == ELFDATA2LSB
		   ? "2's complement, little endian"
		   : "2's complement, big endian");
	printf("  Version:                           %d (current)\n",
	       elf_header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n",
	       elf_header->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n",
	       elf_header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
	       elf_header->e_type == ET_EXEC
		   ? "EXEC (Executable file)"
		   : "Other");
	printf("  Entry point address:               0x%lx\n",
	       (unsigned long)elf_header->e_entry);
}

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int des;
	const char *filename;
	Elf64_Ehdr elf_header;
	ssize_t num_bytes_read;

	if (argc != 2)
	{
		exit_and_error(98, "Usage: elf_header elf_filename");
	}

	filename = argv[1];
	des = open(filename, O_RDONLY);

	if (des == -1)
	{
		exit_and_error(98, "Failed to open the file");
	}

	if (lseek(des, 0, SEEK_SET) == -1)
	{
		close(des);
		exit_and_error(98, "Failed to seek to the beginning of the file");
	}
	num_bytes_read = read(des, &elf_header, sizeof(Elf64_Ehdr));
	if (num_bytes_read == -1 || num_bytes_read != sizeof(Elf64_Ehdr))
	{
		close(des);
		exit_and_error(98, "Failed to read ELF header");
	}
	if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		close(des);
		exit_and_error(98, "Not an ELF file");
	}

	display_info(&elf_header);
	close(des);

	return (0);
}
