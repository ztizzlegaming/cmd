#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	if (argc != 4) {
		printf("ERROR: Incorrect command line arguments given.\n");
		return 0;
	}

	char* end;
	long r = strtol(argv[1], &end, 10);
	long g = strtol(argv[2], &end, 10);
	long b = strtol(argv[3], &end, 10);

	if (r <= 15 && g <= 15 && b <= 15) {
		printf("Hex: #0%lx0%lx0%lx\n", r, g, b);
	} else if (r <= 15 && g <= 15) {
		printf("Hex: #0%lx0%lx%lx\n", r, g, b);
	} else if (r <= 15 && b <= 15) {
		printf("Hex: #0%lx%lx0%lx\n", r, g, b);
	} else if (g <= 15 && b <= 15) {
		printf("Hex: #%lx0%lx0%lx\n", r, g, b);
	} else if (r <= 15) {
		printf("Hex: #0%lx%lx%lx\n", r, g, b);
	} else if (g <= 15) {
		printf("Hex: #%lx0%lx%lx\n", r, g, b);
	} else if (b <= 15) {
		printf("Hex: #%lx%lx0%lx\n", r, g, b);
	} else {
		printf("Hex: #%lx%lx%lx\n", r, g, b);
	}

	return 0;
}
