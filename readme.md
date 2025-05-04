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


Looping and Conditional Statements:
For loop:

bash
Copy
Edit
for i in {1..5}; do
    echo $i
done
While loop:

bash
Copy
Edit
while [ $condition ]; do
    # command
done

### file / dir 
| **Operation**               | **One-Line Code Snippet**                                                |                                                  |
| --------------------------- | ------------------------------------------------------------------------ | ------------------------------------------------ |
| **Open File**               | `int fd = open("file.txt", O_RDONLY);`                                   |                                                  |
| **Read from File**          | `ssize_t bytesRead = read(fd, buffer, sizeof(buffer) - 1);`              |                                                  |
| **Write to File**           | `ssize_t bytesWritten = write(fd, message, strlen(message));`            |                                                  |
| **Close File**              | `if (close(fd) == -1) { perror("close"); exit(1); }`                     |                                                  |
| **Delete File**             | `if (unlink("file.txt") == -1) { perror("unlink"); exit(1); }`           |                                                  |
| **Change File Permissions** | \`if (chmod("file.txt", S\_IRUSR                                         | S\_IWUSR) == -1) { perror("chmod"); exit(1); }\` |
| **Change File Ownership**   | `if (chown("file.txt", 1001, 1001) == -1) { perror("chown"); exit(1); }` |                                                  |

| **Operation**        | **One-Line Code Snippet**                                                                         |
| -------------------- | ------------------------------------------------------------------------------------------------- |
| **Open Directory**   | `DIR *dir = opendir("/home/user");`                                                               |
| **Read Directory**   | `struct dirent *entry; while ((entry = readdir(dir)) != NULL) { printf("%s\n", entry->d_name); }` |
| **Close Directory**  | `if (closedir(dir) == -1) { perror("closedir"); exit(1); }`                                       |
| **Create Directory** | `if (mkdir("new_dir", 0755) == -1) { perror("mkdir"); exit(1); }`                                 |
| **Remove Directory** | `if (rmdir("new_dir") == -1) { perror("rmdir"); exit(1); }`                                       |


