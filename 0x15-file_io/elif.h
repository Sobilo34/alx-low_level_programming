#ifndef ELIF_H
#define ELIF_H

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_my_elf(unsigned char *e_id);
void print_the_magic(unsigned char *e_id);
void class_printer(unsigned char *e_id);
void data_print(unsigned char *e_id);
void to_print_version(unsigned char *e_id);
void prints_abi(unsigned char *e_id);
void prints_osbi(unsigned char *e_id);
void types_printer(unsigned long int e_entry, unsigned char *e_id);
void close_my_elf(int elf);


#endif
