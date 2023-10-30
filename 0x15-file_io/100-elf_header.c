#include "main.h"

/**
 * exit_with_error - writes message to stderr and exits with error code
 * @code: error code
 * @message: error message
 */
void exit_with_error(int code, const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(code);
}

/**
 * display_elf_header_info - displays the information contained in the
 * ELF header at the start of an ELF file.
 * @elf_header: elf_header
 */
void display_elf_header_info(const Elf64_Ehdr *elf_header)
{
	int i;

	printf("ELF Header:");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header->e_ident[i]);
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
	int fd;
	const char *filename;
	Elf64_Ehdr elf_header;

	if (argc != 2)
		exit_with_error(98, "Usage: elf_header elf_filename");

	filename = argv[1];
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		exit_with_error(98, "Failed to open the file");

	if (lseek(fd, 0, SEEK_SET) == -1)
	{
		close(fd);
		exit_with_error(98, "Failed to seek to the beginning of the file");
	}
	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		close(fd);
		exit_with_error(98, "Failed to read ELF header");
	}
	if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		close(fd);
		exit_with_error(98, "Not an ELF file");
	}

	display_elf_header_info(&elf_header);
	close(fd);

	return (0);
}
