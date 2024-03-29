#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int main(int argc, char *args[]) {

	char *buffer;
	int fd, size, count, i;

	if (argc != 3) {
		printf("usage : %s blocksize blockcount\n", args[0]);
		exit(1);
	}

	fd = open("rawio.out", O_WRONLY | O_CREAT | O_TRUNC, 0600);

	size = atoi(args[1]);
	count = atoi(args[2]);

	buffer = malloc(size);

	for(i = 0; i < count ; i++)  {
		write(fd, buffer, size);
	}

	close(fd);

}
