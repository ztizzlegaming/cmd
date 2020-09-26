#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
	if (argc == 1) {
		printf("ERROR: Incorrect command line arguments given.\n");
		return 0;
	}

	//Sum up the lengths of each command line argument
	int len = 0;
	for (int i1 = 1; i1 < argc; i1++) {
		len += strlen(argv[i1]);
	}

	//Add the spaces in
	len += argc - 2;

	printf("%d\n", len);

	return 0;
}
