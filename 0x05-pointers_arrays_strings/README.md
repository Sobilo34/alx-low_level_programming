# 0x05. C - Pointers, arrays and strings

![image](https://github.com/Sobilo34/alx-low_level_programming/assets/122975292/a762ef23-5800-49ef-b014-088089211fa4)

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
A function that checks for uppercase character.
* Prototype: int _isupper(int c);

Returns 1 if c is uppercase and 0 otherwise

- Output Layout
```script
$ ./0-isuper 
A: 1
a: 0
$ 
```
### Task 1
A function that checks for a digit (0 through 9).

- Prototype: int _isdigit(int c);
  
Returns 1 if c is a digit and  0 otherwise
- Output Layout
```script
julien@ubuntu:~/0x04$ ./1-isdigit 
0: 1
a: 0
julien@ubuntu:~/0x04$
```
### Task 2
A function that multiplies two integers.

- Prototype: int mul(int a, int b);
  
- Output Layout
```script
$ ./2-mul 
100352
-1646592
$
```
### Task 3
A function that prints the numbers, from 0 to 9, followed by a new line.

- Prototype: void print_numbers(void);

Can only use _putchar twice in the code
- Output Layout
```script
$ ./3-print_numbers | cat -e
0123456789$
$ 
```
### Task 4
A function that prints the numbers, from 0 to 9, followed by a new line.

- Prototype: void print_most_numbers(void);

Should not print 2 and 4
Can only use _putchar twice in the code
- Output Layout
```script
$ ./4-print_most_numbers 
01356789
$ 
```
### Task 5
A function that prints 10 times the numbers, from 0 to 14, followed by a new line.

- Prototype: void more_numbers(void);

Can only use _putchar three times in the code
- Output Layout
```script
$ ./5-more_numbers 
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
$
```
### Task 6
A function that draws a straight line in the terminal.

- Prototype: void print_line(int n);

Can only use _putchar function to print
Where n is the number of times the character _ should be printed
The line should end with a \n
If n is 0 or less, the function should only print \n
- Output Layout
```script
$ ./6-lines | cat -e
$
__$
__________$
$
$ 
```
### Task 7
A function that draws a diagonal line on the terminal.

- Prototype: void print_diagonal(int n);

Can only use _putchar function to print
Where n is the number of times the character \ should be printed
The diagonal should end with a \n
If n is 0 or less, the function should only print a \n
- Output Layout
```script
$ ./7-diagonals | cat -e
$
\$
 \$
\$
 \$
  \$
   \$
    \$
     \$
      \$
       \$
        \$
         \$
$
$ 
```
### Task 8
A function that prints a square, followed by a new line.

- Prototype: void print_square(int size);

Can only use _putchar function to print
Where size is the size of the square
If size is 0 or less, the function should print only a new line
Use the character # to print the square
- Output Layout
```script
$ ./8-squares 
##
##
##########
##########
##########
##########
##########
##########
##########
##########
##########
##########

$ 
```
### Task 9
A program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.

Each number or word should be separated by a space
Allowed to use the standard library
- Output Layout
```script
$ ./9-fizz_buzz 
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 FizzBuzz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 FizzBuzz 46 47 Fizz 49 Buzz Fizz 52 53 Fizz Buzz 56 Fizz 58 59 FizzBuzz 61 62 Fizz 64 Buzz Fizz 67 68 Fizz Buzz 71 Fizz 73 74 FizzBuzz 76 77 Fizz 79 Buzz Fizz 82 83 Fizz Buzz 86 Fizz 88 89 FizzBuzz 91 92 Fizz 94 Buzz Fizz 97 98 Fizz Buzz
$ 
```

### Task 10
A function that prints a triangle, followed by a new line.

- Prototype: void print_triangle(int size);

Can only use _putchar function to print
Where size is the size of the triangle
If size is 0 or less, the function should print only a new line
Use the character # to print the triangle
- Output Layout
```script
$ ./10-triangles 
 #
##
         #
        ##
       ###
      ####
     #####
    ######
   #######
  ########
 #########
##########
#

$ ./10-triangles | tr ' ' . | cat -e
.#$
##$
.........#$
........##$
.......###$
......####$
.....#####$
....######$
...#######$
..########$
.#########$
##########$
#$
$
$
```

# Advanced Tasks
### Task 100
A program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.

Allowed to use the standard library
The program will be compiled with this command: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm
- Output Layout
```script
$ ./100-prime_factor
50829599
$ 
```
### Task 101
A function that prints an integer.

- Prototype: void print_number(int n);

Can only use _putchar function to print
Not allowed to use long
Not allowed to use arrays or pointers
Not allowed to hard-code special values

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

# Thank You ): 👍
