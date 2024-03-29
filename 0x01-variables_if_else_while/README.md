# 0x01. C - Variables, if, else, while
<img src="https://sammykingx.com.ng/wp-content/uploads/2023/03/blog_post_review.png" width="100%" height="300px">

## Table of Contents

- [Project Description](#project-description)
- [Learning Objectives](#learning-objectives)
- [Resources](#resources)
- [Mandatory Tasks](#mandatory-tasks)
- [Advanced Tasks](#advanced-tasks)
- [Contacts](#contacts)
- [My Github Stats](#my-github-stats)

## Project Description:
The Project teaches Coditional Statements (If else Statements and while loops)

## Learning Objectives:
- What are the arithmetic operators and how to use them
- What are the logical operators (sometimes called boolean operators) and how to use them
- What the the relational operators and how to use them
- What values are considered TRUE and FALSE in C
- What are the boolean operators and how to use them
- How to use the if, if ... else statements
- How to use comments
- How to declare variables of types char, int, unsigned int
- How to assign values to variables
- How to print the values of variables of type char, int, unsigned int with printf
- How to use the while loop
- How to use variables with the while loop
- How to print variables using printf
- What is the ASCII character set
- What are the purpose of the gcc flags -m32 and -m64

## Resources:
#### Read or watch:

* [Keywords and identifiers](http://publications.gbdirect.co.uk/c_book/chapter2/keywords_and_identifiers.html)
* [Integers](http://publications.gbdirect.co.uk/c_book/chapter2/integral_types.html)
* [https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm](https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm)
* [If Statements in C](https://www.cprogramming.com/tutorial/c/lesson2.html)
* [If Else Statements in C](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm)
* [Relational Operators](https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm)
* [Logical Operators](https://fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/)
* [While Loop in C](https://www.youtube.com/watch?v=Ju1LYO9pkaI)
  
The Following are the description of the project tasks with the outpur layout of each task
# Mandatory Tasks
### Task 0
A program  that will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative
- Output Layout
```script
$ ./0-positive_or_negative 
-520693284 is negative
$ ./0-positive_or_negative 
-973398895 is negative
$ ./0-positive_or_negative 
-199220452 is negative
$ ./0-positive_or_negative 
561319348 is positive
$ ./0-positive_or_negative 
561319348 is positive
$ ./0-positive_or_negative 
266853958 is positive
$ ./0-positive_or_negative 
-48147767 is negative
$ ./0-positive_or_negative 
0 is zero
$ 
_putchar
$
```
### Task 1
A program that will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n
- Output Layout
```script
$ ./1-last_digit 
Last digit of 629438752 is 2 and is less than 6 and not 0
$ ./1-last_digit 
Last digit of -748255693 is -3 and is less than 6 and not 0
$ ./1-last_digit 
Last digit of -1052791662 is -2 and is less than 6 and not 0
$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
$ ./1-last_digit 
Last digit of 491506926 is 6 and is greater than 5
$ ./1-last_digit 
Last digit of 954249937 is 7 and is greater than 5
$ ./1-last_digit 
Last digit of 652334952 is 2 and is less than 6 and not 0
$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
$ ./1-last_digit 
Last digit of 809065140 is 0 and is 0
$
```
### Task 2
A program that prints the alphabet in lowercase, followed by a new line.
- Output Layout
```script
$ ./2-print_alphabet 
abcdefghijklmnopqrstuvwxyz
$
```
### Task 3
A program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
- Output Layout
```script
$ ./3-print_alphabets | cat -e
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
$
```
### Task 4
A program that prints the alphabet in lowercase, followed by a new line.
- Output Layout
```script
$ ./4-print_alphabt 
abcdfghijklmnoprstuvwxyz
$ ./4-print_alphabt | grep [eq]
$ 
```
### Task 5
A program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
- Output Layout
```script
$ ./5-print_numbers 
0123456789
$ 
```
### Task 6
A program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
- Output Layout
```script
$ ./6-print_numberz 
0123456789
$ 
```
### Task 7
A program that prints the lowercase alphabet in reverse, followed by a new line.
- Output Layout
```script
$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
$
```
### Task 8
A program that prints all the numbers of base 16 in lowercase, followed by a new line.
- Output Layout
```script
$ ./8-print_base16
0123456789abcdef
$
```
### Task 9
A program that prints all possible combinations of single-digit numbers.
- Output Layout
```script
$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
$ 
```


# Advanced Tasks
### Task 100
A program that prints all possible different combinations of two digits.
- Output Layout
```script
$ ./100-print_comb3
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
$ 
```
### Task 101
A program that prints all possible different combinations of three digits.
- Output Layout
```script
$ ./101-print_comb4
012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789
$
```

### Task 102
A program that prints all possible combinations of two two-digit numbers.
- Output Layout
```script
$ ./102-print_comb5
00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, [...] 40 91, 40 92, 40 93, 40 94, 40 95, 40 96, 40 97, 40 98, 40 99, 41 42, 41 43, 41 44, 41 45, 41 46, 41 47, 41 48, 41 49, 41 50, 41 51, 41 52, 41 53 [...] 93 95, 93 96, 93 97, 93 98, 93 99, 94 95, 94 96, 94 97, 94 98, 94 99, 95 96, 95 97, 95 98, 95 99, 96 97, 96 98, 96 99, 97 98, 97 99, 98 99
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

# Thank You ):   👍
