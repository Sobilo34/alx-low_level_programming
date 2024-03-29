# 0x04. C - More functions, more nested loops

(![image](https://github.com/Sobilo34/alx-low_level_programming/assets/122975292/3f9e5d2d-4558-4496-9ce2-200c48ccfc74)

## Table of Contents

- [Project Description](#project-description)
- [Learning Objectives](#learning-objectives)
- [Resources](#resources)
- [Mandatory Tasks](#mandatory-tasks)
- [Advanced Tasks](#advanced-tasks)
- [Contacts](#contacts)
- [My Github Stats](#my-github-stats)
  
## Project description:
The concept of this project is to solve many problems/challenges with Nested loops

## Learning Objectives:
- What are nested loops and how to use them
- What is a function and how do you use functions
- What is the difference between a declaration and a definition of a function
- What is a prototype
- Scope of variables
- What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89
- What are header files and how to to use them with #include

## Resources:
#### Read or watch:

* [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss)
* [C - Functions](http://www.tutorialspoint.com/cprogramming/c_functions.htm)
* [Learning to Program in C pt. 6](https://www.youtube.com/watch?v=qMlnFwYdqIw)
* [Purpose of a function prototype](https://www.youtube.com/watch?v=qMlnFwYdqIw)
* [C-Header Files](https://www.tutorialspoint.com/cprogramming/c_header_files.htm)
  
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
$ ./1-isdigit 
0: 1
a: 0
$
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
