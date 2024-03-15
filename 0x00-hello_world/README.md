# 0x00 Hello world in C
## My First Project in C laungauge

![image](https://github.com/Sobilo34/alx-low_level_programming/assets/122975292/9d4a731a-18d8-49fc-9766-b56319a77b9f)

## Table of Contents

- [What is C language](#what-is-c-language)
- [Why this C language?](#why-this-c-language?)
- [How to write Hello World! in C](#how-to-write-hello-world!-in-c)
- [Learning Objectives](#learning-objectives)
- [Resources](#resources)
- [Project Requirements](#project-requirements)
- [Contacts](#contacts)
- [My Github Stats](#my-github-stats)

## What is C language
C is a general-purpose programming language that was created in the early 1970s by Dennis Ritchie at Bell Labs. "Hello World" is a convention used for learning a new Programming language by printing a text(Hello World!) with a specific language. It help to know the techniques of writing a text with a particular language.

## Why this C language?
- C has form the basics/foundation of many Programming languages like C++, C#, Java, Objective -C and so on.So it's essential in software engineering field.
- It's used in building System software like Operating system, other system level programming.
- It's very versatile with it usability in both Application and System software building.
- It can help in having good career opportunity because of high demand in software industries.

## How to write Hello World! in C
These are the functions that can be used:
- **printf**: This is a print function that is used to print text to stdout. 
```C
printf("Hello World!\n");
```
The "\n" stand for newline.

- **puts**: This function prints a string to the standard output followed by a newline character. It is simple and adds a newline automatically.

```C
puts("Hello, world!");
```

- **fputs**: This is used to write string to a file. It first parameter is the string to write and the second parameter is the file stream(e.g stdin, stdout or specified_file_name).

```C
FILE *file = fopen("file_name.txt", "w");
const char *text = "Hello World!";
fputs(text, file);
fclose(file);
```
- **putchar**: This is a function that writes a character to the standard output. It is often used in a loop for printing individual characters.

```C
char c = 'H';
putchar(c);
```

##  Learning Objectives 
- Why C Programming is awesome
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
- What happens when you type gcc main.c
- What is an entry point
- What is main
- How to print text using printf, puts and putchar
- How to get the size of a specific type using the unary operator sizeof
- How to compile using gcc
- What is the default program name when compiling with gcc
- What is the official coding style and how to check your code with betty-style
- How to find the right header to include in your source code when using a standard library function
- How does the main function influence the return value of the program

## Resources:
#### Read or watch:

* [C - Arrays](https://intranet.alxswe.com/rltoken/PVi2XMuApOK3jfhsoqsyXw)
* [C - Pointers](https://intranet.alxswe.com/rltoken/oyHybzYBeFiLUMALpb_usA)
* [C - Strings](https://intranet.alxswe.com/rltoken/sUeh9qDyW9pePOfJIpx_Bw)
* [Memory Layout](https://intranet.alxswe.com/rltoken/0k6CD2ZMzSFOMUxMOBiAlQ)
* [Arrays & Pointers in C Programming Explained](https://intranet.alxswe.com/rltoken/MiVrdKaKsnFsUOYQBtXugg)
  
## Project Requirements
C Language
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file at the root of the repo, containing a description of the repository
- A README.md file, at the root of the folder of this project, containing a description of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use system
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

 
Scripts
- Allowed editors: vi, vim, emacs
- All your scripts will be tested on Ubuntu 20.04 LTS
- All your scripts should be exactly two lines long ($ wc -l file should print 2)
- All your files should end with a new line
- The first line of all your files should be exactly #!/bin/bash
## More Info
To run the Betty linter just with command betty <filename>:
- Go to the Betty repository
- Clone the repo to your local machine
- cd into the Betty directory
- Install the linter with sudo ./install.sh
- emacs or vi a new file called betty, and copy the script below:
```script
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```
- Once saved, exit file and change permissions to apply to all users with chmod a+x betty
- Move the betty file into /bin/ directory or somewhere else in your $PATH with sudo mv betty /bin/.

Now, type betty <filename> to run the **Betty linter!**

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
