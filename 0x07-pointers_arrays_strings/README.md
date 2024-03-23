# 0x07. C - Even more pointers, arrays and strings

![image](https://github.com/Sobilo34/alx-low_level_programming/assets/122975292/b7849c4a-243c-4501-ab83-afe888a1acae)


## Table of Contents

- [Project Description](#project-description)
- [Learning Objectives](#learning-objectives)
- [Resources](#resources)
- [Mandatory Tasks](#mandatory-tasks)
- [Advanced Tasks](#advanced-tasks)
- [Contacts](#contacts)
- [My Github Stats](#my-github-stats)
  
## Project description:
The concept of this project is on Pointers, Arrays and Strings in C language.
+ Pointers are variables that store the memory address of another variable, allowing for efficient manipulation of data.
+ Arrays are variables of the same data type, stored in contiguous memory locations.
+ String is a one-dimensional array of characters terminated with the null character.

## Learning Objectives:
- What are pointers to pointers and how to use them
- What are multidimensional arrays and how to use them
- What are the most common C standard library functions to manipulate strings

## Resources:
#### Read or watch:

* [Pointers and arrays](https://intranet.alxswe.com/concepts/60)
* [C - Pointer to Pointer](https://intranet.alxswe.com/rltoken/eyikXPg7ZxCAEuWklB6xtQ)
* [C – Pointer to Pointer with example](https://intranet.alxswe.com/rltoken/ojr7OUUm2I-MULE4lWlrkg)
* [Multi-dimensional Arrays in C](https://intranet.alxswe.com/rltoken/HUZIJ6t55KM7d7FBCwWm8Q)
* [Two dimensional (2D) arrays in C programming with example](https://intranet.alxswe.com/rltoken/Dx9nIBRj68sRBGe2NRI_aQ)
*  [Arrays, Strings & Pointers in C Programming](https://intranet.alxswe.com/rltoken/8dnWfdRPPLVuzPQKVTGljA)
  
The following are the description of the functionality of the Tasks with the Expected Output Layout
# Mandatory Tasks
### Task 0
A function that fills memory with a constant byte.
* Prototype: char *_memset(char *s, char b, unsigned int n);
  + The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
  + Returns a pointer to the memory area s

- Entry Point
```C
void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int i;

        i = 0;
        while (i < size)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
                i++;
        }
        printf("\n");
}

int main(void)
{
    char buffer[98] = {0x00};

    simple_print_buffer(buffer, 98);
    _memset(buffer, 0x01, 95);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);    
    return (0);
}
```
- Output Layout
```script
$ ./0-memset 
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
-------------------------------------------------
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x00 0x00 0x00
$ 
```
### Task 1
A function that copies memory area.
- Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
  + The _memcpy() function copies n bytes from memory area src to memory area dest
  + Returns a pointer to dest
  
Returns 1 if c is a digit and  0 otherwise
- Entry Point
```C
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

int main(void)
{
    char buffer[98] = {0};
    char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    simple_print_buffer(buffer, 98);
    _memcpy(buffer + 50, buffer2, 10);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);    
    return (0);
}
```
- Output Layout
```script
$ ./1-memcpy 
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
-------------------------------------------------
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x01 0x02 0x03 0x04 0x05 0x07 0x07 0x08 0x09 0x0a
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
$ 
```
### Task 2
A  function that locates a character in a string.
- Prototype: char *_strchr(char *s, char c);
  + Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
    
- Entry Point
```C
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}
```
- Output Layout
```script
$ ./2-strchr 
llo
julien@ubuntu:~/0x07$ 
```
### Task 3
A function that gets the length of a prefix substring.

- Prototype: unsigned int _strspn(char *s, char *accept);
  + Returns the number of bytes in the initial segment of s which consist only of bytes from accept
- Entry Point
```C
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
```
- Output Layout
```script
$ ./3-strspn 
5
$ 
```
### Task 4
A function that searches a string for any of a set of bytes.

- Prototype: char *_strpbrk(char *s, char *accept);
  + The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
  + Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
    
- Entry Point
```C
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}
```
- Output Layout
```script
$ ./4-strpbrk 
llo, world
$ 
```

### Task 5
A function that locates a substring.
- Prototype: char *_strstr(char *haystack, char *needle);
  + The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared
  + Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.
- Entry Point
```C
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
```
- Output Layout
```script
$ ./5-strstr 
world
$ 
```
### Task 6
A  function that prints the chessboard.
- Prototype: void print_chessboard(char (*a)[8]);
  
- Entry Point
```C
int main(void)
{
    char board[8][8] = {
        {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
    };
    print_chessboard(board);
    return (0);
}
```
- Output Layout
```script
$ ./7-print_chessboard 
rkbqkbkr
pppppppp




PPPPPPPP
RKBQKBKR
$ 
```
### Task 7
A function that prints the sum of the two diagonals of a square matrix of integers.

- Prototype: void print_diagsums(int *a, int size);

- Entry Point
```C
int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);
    return (0);
}
```
- Output Layout
```script
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_diagsums.c -o 8-print_diagsums
julien@ubuntu:~/0x07$ ./8-print_diagsums 
113, 1016
1214556093, 1137318
$ 
```

# Advanced Tasks
### Task 100
A function that sets the value of a pointer to a char.

- Prototype: void set_string(char **s, char *to);
  
- Entry Point
```C
int main(void)
{
    char *s0 = "Bob Dylan";
    char *s1 = "Robert Allen";

    printf("%s, %s\n", s0, s1);
    set_string(&s1, s0);
    printf("%s, %s\n", s0, s1);
    return (0);
}
```
- Output Layout
```script
$ ./100-set_string 
Bob Dylan, Robert Allen
Bob Dylan, Bob Dylan
$ 
```
### Task 101
A file that contains the password for the crackme2 executable.

  + file should contain the exact password, no new line, no extra space
  + may need to install the openssl library to run the crakme2 program: sudo apt install libssl-dev
  + May need to Edit the source list sudo nano /etc/apt/sources.list to add the following line: deb http://security.ubuntu.com/ubuntu xenial-security main Then sudo apt update and sudo apt install libssl1.0.0

- Source_code
[crackme2](https://github.com/alx-tools/0x06.c)


## Contacts
[![Beacons.ai Profile](https://img.shields.io/badge/Beacon-Sobil-9cf?style=for-the-badge&logo=beacons&color=blue)](https://beacons.ai/sobil56)

[![Email](https://img.shields.io/badge/Email-D14836?style=for-the-badge&logo=gmail&logoColor=white)](mailto:bilalsolih60@gmail.com)
[![Twitter](https://img.shields.io/badge/Twitter-1DA1F2?style=for-the-badge&logo=twitter&logoColor=white)](https://twitter.com/sobil56)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/bilal-oyeleke-98202825b)
[![Instagram](https://img.shields.io/badge/Instagram-E4405F?style=for-the-badge&logo=instagram&logoColor=white)](https://www.instagram.com/bilaloyeleke/)
[![WhatsApp](https://img.shields.io/badge/WhatsApp-25D366?style=for-the-badge&logo=whatsapp&logoColor=white)](https://wa.me/2349134422033)

## My Github Stats
![GitHub Stats](https://github-readme-stats.vercel.app/api?username=Sobilo34&show_icons=true&count_private=true&hide_title=true&hide=prs&theme=radical)

# Thank You ): 👍
