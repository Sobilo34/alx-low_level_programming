/**
 * print_entry - prints the entry point of an ELF header
 * e_entry: The address of the ELF entry containing the ELF class
 */
void print_entry(unsigned long int e_entry, unsigned char *e_id)
{
        printf("Entry point address: ");

        if (e_id[e_data] == ELFDATA2MSB)
        {
                e_entry = ((e_entry << 8) & 0xFF00FF0) |
                        ((e_entry >> 8 0xFF00FF);
                e_entry = (e_entry << 16) | (e_entry >> 16);
        }

        if (e_id[e_class] == ELFCLASS32)
                printf("%x\n", (unsigned int)e_entry);
        else
                printf("%#1x\n", e_entry);
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
        Elf64_Ehdr * header;
        int o, r;

        o = open(argv[1], o_RDONLY);
        if (o == -1)
        {
                dprintf(STDERR_FILENO, "Error: can't read file %s\n", argv[1]);
                exit(98);
        }
        header = malloc(sizeof(Elf64_Ehdr));
        if (header == NULL)
        {
                close_elf(o);
                dprintf(STDERR_FILENO, "Error: can't read file %s\n", argv[1]);
                exit(98);
        }
        r = read(o, header, sizeof(Elf64_Ehdr));
        if (r == -1)
        {
                free(header);
                close_elif(o);
                dprintf(STDERR_FILENO, "Error: '%s' : No such file\n", argv[1]);
                exit(98);
        }

	check_elf(header->e_id);
	printf("ELF HEADER:\n");
	printf_magic(header->e_id);
	printf_class(header->e_id);
	printfdata(header->e_id);
	printf_version(header->e_id);
	printf_osbi(header->e_id);
	printf_abi(header->e_id);
	printf_type(header->e_type, header->e_id);
	printf_entry(header->e_entry, header->e_id);

	free(header);
	close_elf(o);
	return (0);
}
