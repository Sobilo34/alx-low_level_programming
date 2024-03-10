#  0x03. C - Debugging
## A Project on Undestanding the Manual Concept of Debugging

<img src="https://i.pinimg.com/736x/54/2a/1c/542a1c0ee23024c1daec8aaf7ccf3c90.jpg" alt="Debugging Icon" width="100%" height="400px">

## Project description:
The concept of this project is to learn how to debug codes with bugs manually.

## Learning Objectives:
- What is debugging
- What are some methods of debugging manually
- How to read the error messages

The following are the descriptions of the functionality of the tasks together with the Output Layout

### Task 0
Created file named 0-main.c that tests if the function [positive_or_negative()](https://github.com/Sobilo34/alx-low_level_programming/blob/master/0x01-variables_if_else_while/0-positive_or_negative.c) gives the correct output when given a case of 0.
- Output Layout
```script
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main
$ ./0-main
0 is zero
$ wc -l 0-main.c
16 1-main.c
$ 
```
### Task 1
Commenting out of the part of code that makes the program to be in Infinite loop inside [1-main.c](https://github.com/Sobilo34/alx-low_level_programming/blob/master/0x03-debugging/1-main.c) file
- Output Layout
```script
$ gcc -std=gnu89 1-main.c -o 1-main
$ ./1-main
Infinite loop incoming :(
Infinite loop avoided! \o/
$ wc -l 1-main.c
24 1-main.c
$
```
### Task 2
Fixed the code in [2-largest_number.c](https://github.com/Sobilo34/alx-low_level_programming/blob/master/0x03-debugging/2-largest_number.c) so that it correctly prints out the largest of three numbers, no matter the case
- Output Layout
```script
For Instance if a = 2, b = 3 and c = 7
$ ./2-main
7 is the largest number
$
```
### Task 3
Fixed the [print_remaining_days()](https://github.com/Sobilo34/alx-low_level_programming/blob/master/0x03-debugging/3-print_remaining_days.c) function so that the output works correctly for all dates in both Non-leap years and  leap years
- Output Layout
```script
For Non-Leap Year:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_a.c -o 3-main_a 
$ ./3-main_a
Date: 04/01/1997
Day of the year: 91
Remaining days: 274
$

For Leap Year:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_b.c -o 3-main_b 
$ ./3-main_b
Date: 02/29/2000
Day of the year: 60
Remaining days: 306
$
```

# Thank You ):   👍
