#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

void main() {

	int fd;
	if((fd = open("foo", O_WRONLY | O_CREAT, 0644)) < 0) {
		printf("Error Occured #: %d \n", errno);
		perror("foo");
		exit(1);
	}
	write(fd, "Hello, World!\n", 15);
	close(fd);
}
