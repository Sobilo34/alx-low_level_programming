# 0x05. C - Pointers, arrays and strings

![image](https://github.com/Sobilo34/alx-low_level_programming/assets/122975292/fb401d53-e86e-43bf-9bf3-5535ef26dcf6)

## Table of Contents

- [Project Description](#project-description)
- [Learning Objectives](#learning-objectives)
- [Resources](#resources)
- [Mandatory Tasks](#mandatory-tasks)
- [Advanced Tasks](#advanced-tasks)
- [Contact](#contact)
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

The following are the description of the functionality of the Tasks with the Expected Output Layout
# Mandatory Tasks
### Task 0
A function that takes a pointer to an int as parameter and updates the value it points to to 98.
* Prototype: void reset_to_98(int *n);

- Entry Point
```C
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
```
- Output Layout
```script
$ ./0-98 
n=402
n=98
$ 
```
### Task 1
A function that swaps the values of two integers.

- Prototype: void swap_int(int *a, int *b);
  
Returns 1 if c is a digit and  0 otherwise
- Entry Point
```C
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
```
- Output Layout
```script
$ ./1-swap 
a=98, b=42
a=42, b=98
$
```
### Task 2
A  function that returns the length of a string.

- Prototype: int _strlen(char *s);
  - Entry Point
```C
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
```
- Output Layout
```script
$ ./2-strlen 
16
$ 
```
### Task 3
A function that prints a string, followed by a new line, to stdout.

- Prototype: void print_numbers(void);
- Entry Point
```C
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
```
- Output Layout
```script
$ ./3-puts 
I do not fear computers. I fear the lack of them - Isaac Asimov
$ 
```
### Task 4
A function that prints a string, in reverse, followed by a new line.

- Prototype: void print_rev(char *s);
- Entry Point
```C
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
```
- Output Layout
```script
$ ./4-print_rev 
vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I
$ 
```
### Task 5
A function that reverses a string.

- Prototype: void rev_string(char *s);
- Entry Point
```C
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
```
- Output Layout
```script
$ ./5-rev_string 
My School
loohcS yM
$ 
```
### Task 6
A function that prints every other character of a string, starting with the first character, followed by a new line.

- Prototype: void puts2(char *str);

- Entry Point
```C
int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
```
- Output Layout
```script
$ ./6-puts2 
02468
$ 
```
### Task 7
A function that prints half of a string, followed by a new line.

- Prototype: void print_diagonal(int n);

The function should print the second half of the string
If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2

- Entry Point
```C
int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}
```
- Output Layout
```script
$ ./7-puts_half 
56789
$ 
```

### Task 8
A function that prints n elements of an array of integers, followed by a new line.

- Prototype:void print_array(int *a, int n);

where n is the number of elements of the array to be printed
Numbers must be separated by comma, followed by a space
The numbers should be displayed in the same order as they are stored in the array
Allowed to use printf

- Entry Point
```C
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}
```
- Output Layout
```script
$ ./8-print_array 
98, 402, -198, 298, -1024
$
```
### Task 9
A function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
- Prototype: char *_strcpy(char *dest, char *src);
  Return value: the pointer to dest
  
- Entry Point
```C
int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}
```
- Output Layout
```script
$ ./9-strcpy 
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
$ 
```

# Advanced Tasks
### Task 100
A function that convert a string to an integer.

- Prototype: int _atoi(char *s);

The number in the string can be preceded by an infinite number of characters
You need to take into account all the - and + signs before the number
If there are no numbers in the string, the function must return 0
You are not allowed to use long
You are not allowed to declare new variables of “type” array
You are not allowed to hard-code special values
We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.

- Entry Point
```C
int main(void)
{
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}
```
- Output Layout
```script
$ ./100-atoi 
98
-402
-98
214748364
0
402
98
402
$  
```

### Task 101
A  a program that generates random valid passwords for the program 101-crackme.

- Prototype: void print_number(int n);

You are allowed to use the standard library
You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests)
man srand, rand, time
gdb and objdump can help

- Output Layout
```script
$ ./101-crackme "`./101-keygen`"
Tada! Congrats
$
```

# Thank You ): 👍
