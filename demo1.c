#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_password(char *password) {
	int authorized = 0;
	char buffer[76];

	strcpy(buffer, password);
	if ( strcmp(buffer, "secret") == 0) {
		authorized = 1;
	}

	return authorized;
}

int main(int argc, char *argv[]) {

	if (argc != 2) {
		printf("Give me the right password and I will tell you a secret.\
			Usage: %s <password>\n", argv[0]);
		exit(0);
	}

	if (check_password(argv[1])) {
		printf("The pope has a funny hat.\n");
	} else {
		printf("Sorry - wrong password.\n");
	}

	return 0;

}
