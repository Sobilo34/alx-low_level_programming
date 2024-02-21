# 0x00 Hello world in C
## My First Project in C laungauge

<img src="https://sammykingx.com.ng/wp-content/uploads/2022/12/c_hello-world.png" width="100%" height="300px">

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

# Thank You ):   👍
