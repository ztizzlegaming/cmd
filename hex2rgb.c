#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	if (argc != 2) {
		printf("ERROR: Incorrect command line arguments given.\n");
		return 0;
	}

	char* end;
	long num = strtol(argv[1], &end, 16);

	long r = (num & 0xFF0000) >> 16;
	long g = (num & 0xFF00) >> 8;
	long b = num & 0xFF;

	printf("R: %ld\n", r);
	printf("G: %ld\n", g);
	printf("B: %ld\n", b);

	return 0;
}
