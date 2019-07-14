#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *args[]) {

	char *buffer;
	int size, count, i;
	FILE *fd;

	if (argc != 3) {
		printf("usage : %s blocksize blockcount\n", args[0]);
		exit(1);
	}

	fd = fopen("bufio.out", "w");

	size = atoi(args[1]);
	count = atoi(args[2]);

	buffer = malloc(size);

	for(i = 0; i < count ; i++)  {
		fwrite(buffer, size, 1, fd);
	}

	fclose(fd);

}
