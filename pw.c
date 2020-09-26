#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("ERROR: \n");
		return 0;
	}

	//Get length of password to generate
	int n = atoi(argv[1]);

	//Seed random number generator by current time
	srand(time(0));

	//Init characters we can draw from
	const *S = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	//Loop n times and pick a random character
	int r;
	char c;
	for (int i1 = 0; i1 < n; i1++) {
		r = rand() % 72;
		c = S[r];
		printf("%c", c);
	}
	printf("\n");

	return 0;
}
