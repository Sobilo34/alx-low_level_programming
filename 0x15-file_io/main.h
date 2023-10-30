#ifndef FILE_IO
#define FILE_IO

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <elf.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void exit_and_error(int fnc, const char *message);
void display_info(const Elf64_Ehdr *elf_header);
const char *get_os_abi(uint8_t os_abi);
const char *get_type_string(uint16_t type);


#endif
