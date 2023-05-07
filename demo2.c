#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 10000

int main() {

	char *buffer = malloc(BUFFER_SIZE * sizeof(char));

	for (int i=0; i<BUFFER_SIZE; i++)
	{
		buffer[i] = 'A';
	}

	free(buffer);

	char *str = malloc(5 * sizeof(char));
	printf("%.15s\n", str);

	return 0;
}
