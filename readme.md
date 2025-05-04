1. Shell Scripting:

Task: Write a shell script to count the number of files and directories in the current directory, including hidden ones.

2. Basic Linux Commands:

Task: Use the grep command to find and display all lines containing the word "error" in a file called log.txt, but only show the line numbers.

3. File Manipulation Using System Calls in C:

Task: Write a C program using system calls to open a file, write some content, and then close the file. Ensure that the file exists before writing to it.

4. Directory Manipulation Using System Calls in C:

Task: Write a C program to create a directory and then list the contents of that directory using system calls like opendir() and readdir().

5. Process Management Using System Calls:

Task: Write a C program to create a child process using fork(), and in the parent process, wait for the child to complete before exiting.

6. Multithreading Using Pthread Library:

Task: Write a C program that creates two threads using pthread_create(), where each thread prints its ID and a message.


```
| Library       | Purpose                                 | Key Functions                        |
| ------------- | --------------------------------------- | ------------------------------------ |
| `<stdio.h>`   | Input/Output functions                  | `printf()`, `scanf()`, `fopen()`     |
| `<unistd.h>`  | Unix system calls                       | `fork()`, `exec()`, `getpid()`       |
| `<fcntl.h>`   | File control (open, read, write)        | `open()`, `close()`, `lseek()`       |
| `<stdlib.h>`  | Memory management and utility functions | `malloc()`, `free()`, `exit()`       |
| `<pthread.h>` | Threading library (for POSIX threads)   | `pthread_create()`, `pthread_join()` |
| `<errno.h>`   | Error handling                          | `errno`, `perror()`, `strerror()`    |

```
