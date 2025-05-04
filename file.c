#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 200

int main() {
    
    char *buff = malloc(BUFFER_SIZE);
    int fd = open("some.txt", O_RDONLY);
    
    ssize_t buf_read = read(fd, buff, BUFFER_SIZE);

    buff[buf_read] = '\0';

    printf("Content read from the file: %s\n", buff);

    free(buff);
    close(fd);

    return 0;
}
