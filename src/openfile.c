#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;

	if  ((fp = fopen("datafile.dat", "r")) == NULL) {
		printf("Couldn't open datafile.dat for reading\n");
		exit(1);
	}

	// fp is now initialized and can be read from
	//
	return 0;
}
