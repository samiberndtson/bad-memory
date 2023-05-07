/* 

	This is a small program to test shellcode.

*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>



int main (int argc, char **argv) {

	char shellcode[1000];

	if (argc != 2) {
		printf("Usage: %s <shellcode>\n", argv[0]);
		exit(0);
	}


	FILE *fp = fopen(argv[1], "r");

	if (fp != NULL) {
		size_t newLen = fread(shellcode, sizeof(char), 1000 - 1, fp);
		if ( ferror( fp ) != 0 ) {
			fputs("Error reading file", stderr);
		} else {
			shellcode[newLen++] = '\n';
		}

		fclose(fp);
	}

	(*(void (*)()) shellcode)();

	return 0;

}
