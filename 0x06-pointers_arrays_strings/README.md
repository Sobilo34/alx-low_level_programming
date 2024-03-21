# 0x06. C - More pointers, arrays and strings

![image](https://github.com/Sobilo34/alx-low_level_programming/assets/122975292/24f8e5a2-0056-4df5-8273-31edab14e0ea)

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
- What are pointers and how to use them
- What are arrays and how to use them
- What are the differences between pointers and arrays
- How to use strings and how to manipulate them
- Scope of variables

## Resources:
#### Read or watch:

* [C - Pointer to Pointer](https://intranet.hbtn.io/rltoken/97ic1ots5Y44UW4c5HBtRQ)
* [C - Pointer to Pointer with example](https://intranet.hbtn.io/rltoken/97z8i9z1xAZuuT4rM0UEUg)
* [Multi Dimensional Arrays in C](https://intranet.hbtn.io/rltoken/OINOASSTk6-D9PqX2oZZYw)
* [Two dimensional arrays in C programming with example](https://intranet.hbtn.io/rltoken/i9uZ2jWeVSPZCJpgPheuEA)
* [pointers and arrays again!](https://intranet.hbtn.io/rltoken/pvXJUy7BsqzZhdfEtR6zEw)
  
The following are the description of the functionality of the Tasks with the Expected Output Layout
# Mandatory Tasks
### Task 0
A function that concatenates two strings.
* Prototype: char *_strcat(char *dest, char *src);
  + This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
  + Returns a pointer to the resulting string dest

- Entry Point
```C
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
```
- Output Layout
```script
$ ./0-strcat 
Hello 
World!
Hello World!
World!
Hello World!
$ 
```
### Task 1
A function that concatenates two strings.
- Prototype: char *_strncat(char *dest, char *src, int n);
  + The _strncat function is similar to the _strcat function, except that
    + it will use at most n bytes from src; and
    + src does not need to be null-terminated if it contains n or more bytes
  + Return a pointer to the resulting string dest
  
Returns 1 if c is a digit and  0 otherwise
- Entry Point
```C
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
```
- Output Layout
```script
$ ./1-strncat 
Hello 
World!
Hello W
World!
Hello W
Hello WWorld!
World!
Hello WWorld!
$ 
```
### Task 2
A  function that copies a string.

- Prototype: char *_strncpy(char *dest, char *src, int n);
  + function should work exactly like strncpy
    
- Entry Point
```C
int main(void)
{
    char s1[98];
    char *ptr;
    int i;

    for (i = 0; i < 98 - 1; i++)
    {
        s1[i] = '*';
    }
    s1[i] = '\0';
    printf("%s\n", s1);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    printf("%s\n", s1);
    printf("%s\n", ptr);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    printf("%s", s1);
    printf("%s", ptr);
    for (i = 0; i < 98; i++)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", s1[i]);
    }
    printf("\n");
    return (0);
}
```
- Output Layout
```script
$ ./2-strncpy 
*************************************************************************************************
First********************************************************************************************
First********************************************************************************************
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
0x46 0x69 0x72 0x73 0x74 0x2c 0x20 0x73 0x6f 0x6c
0x76 0x65 0x20 0x74 0x68 0x65 0x20 0x70 0x72 0x6f
0x62 0x6c 0x65 0x6d 0x2e 0x20 0x54 0x68 0x65 0x6e
0x2c 0x20 0x77 0x72 0x69 0x74 0x65 0x20 0x74 0x68
0x65 0x20 0x63 0x6f 0x64 0x65 0x0a 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x00
$ 
```
### Task 3
A function that compares two strings.
- Prototype: int _strcmp(char *s1, char *s2);
  + function should work exactly like strcmp
- Entry Point
```C
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}
```
- Output Layout
```script
$ ./3-strcmp 
-15
15
0
$ 
```
### Task 4
A function that reverses the content of an array of integers.

- Prototype: void reverse_array(int *a, int n);
  + Where n is the number of elements of the array
    
- Entry Point
```C
void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}

int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));
    print_array(a, sizeof(a) / sizeof(int));
    return (0);
}
```
- Output Layout
```script
$ ./4-rev_array 
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337
1337, 1024, 98, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
$ 
```

### Task 5
A  function that changes all lowercase letters of a string to uppercase.

- Prototype: char *string_toupper(char *);
- Entry Point
```C
int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
```
- Output Layout
```script
$ ./5-string_toupper 
LOOK UP!
LOOK UP!
$ 
```
### Task 6
A function that capitalizes all words of a string.
- Prototype: char *cap_string(char *);
  + Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }

- Entry Point
```C
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
```
- Output Layout
```script
$ ./6-cap 
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World Hello World.Hello World
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World Hello World.Hello World
$ 
```
### Task 7
A function that encodes a string into 1337.

- Prototype: char *leet(char *);
  + Letters a and A should be replaced by 4
  + Letters e and E should be replaced by 3
  + Letters o and O should be replaced by 0
  + Letters t and T should be replaced by 7
  + Letters l and L should be replaced by 1
  + Can only use one if in your code
  + Can only use two loops in your code
  + Allowed to use switch
  + Allowed to use any ternary operation

- Entry Point
```C
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
```
- Output Layout
```script
$ ./7-1337 
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
$ 
```

# Advanced Tasks
### Task 100
A function that encodes a string using rot13.

- Prototype: char *rot13(char *);
  + Can only use if statement once in your code
  + Can only use two loops in your code
  + Allowed to use switch
  + Allowed to use any ternary operation

- Entry Point
```C
int main(void)
{
    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
    char *p;

    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    return (0);
}
```
- Output Layout
```script
$ ./100-rot13 
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher.
------------------------------------
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
$ 
```
### Task 101
A function that prints an integer.
- Prototype: void print_number(int n);
  + Can only use _putchar function to print
  + Not allowed to use long
  + Not allowed to use arrays or pointers
  + Not allowed to hard-code special values
  
- Entry Point
```C
int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    return (0);
}
```
- Output Layout
```script
$ ./101-print_numbers 
98
402
1024
0
-98
$ 
```


### Task 102
Added one line to this code, so that the program prints a[2] = 98, followed by a new line.

- Source Code
```C
#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  ;
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}
```

### Task 103
A function that adds two numbers.

- Prototype: char *infinite_add(char *n1, char *n2, char *r, int size_r);
  + Where n1 and n2 are the two numbers
  + r is the buffer that the function will use to store the result
  + size_r is the buffer size
  + The function returns a pointer to the result
  + Assume that you will always get positive numbers, or 0
  + ssume that there will be only digits in the strings n1 and n2
  + n1 and n2 will never be empty
  + If the result can not be stored in r the function must return 0

- Entry Point
```C
int main(void)
{
        char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
        char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
        char r[100];
        char r2[10];
        char r3[11];
        char *res;

        res = infinite_add(n, m, r, 100);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        n = "1234567890";
        m = "1";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        n = "999999999";
        m = "1";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        res = infinite_add(n, m, r3, 11);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        return (0);
}
```
- Output Layout
```script
$ ./103-add 
1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458 + 9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346 = 10269358555905271602506489145024737320744338932474201434349082690912722437209719106353804
Error
Error
999999999 + 1 = 1000000000
$ 
```

### Task 104
A function that prints a buffer.

- Prototype: void print_buffer(char *b, int size);
  + The function must print the content of size bytes of the buffer pointed by b
  + The output should print 10 bytes per line
  + Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0
  + Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space
  + Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print .
  + Each line ends with a new line \n
  + If size is 0 or less, the output should be a new line only \n
  + You are allowed to use the standard library
  + The output should look like the following example, and formatted exactly the same way:

- Entry Point
```C
int main(void)
{
    char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";

    printf("%s\n", buffer);
    printf("---------------------------------\n");
    print_buffer(buffer, sizeof(buffer));
    return (0);
}
```
- Output Layout
```script
$ ./104-buffer 
This is a string!
---------------------------------
00000000: 5468 6973 2069 7320 6120 This is a 
0000000a: 7374 7269 6e67 2100 416e string!.An
00000014: 6420 7468 6973 2069 7320 d this is 
0000001e: 7468 6520 7265 7374 206f the rest o
00000028: 6620 7468 6520 2362 7566 f the #buf
00000032: 6665 7220 3a29 0102 0304 fer :)....
0000003c: 0506 0723 6369 7366 756e ...#cisfun
00000046: 0a00 0000 0000 0000 0000 ..........
00000050: 0000 0000 0000 0000 0000 ..........
0000005a: 2021 3456 2370 6f69 6e74  !4V#point
00000064: 6572 7361 7265 6675 6e20 ersarefun 
0000006e: 2369 6e66 6572 6e75 6d69 #infernumi
00000078: 7366 756e 0a00           sfun..
$ 
```


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
