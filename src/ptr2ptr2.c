#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char **p;
	int i;

	p = malloc(sizeof(char*) * 10); // allocat 10 char *s worth of bytes

	for(i = 0; i < 10; i++) {
		*(p+i) = malloc(30); // 30 bytes for each pointer
		
		// alternatively we could have written, above:
		// p[i] = malloc(30);
		// alas
		sprintf(*(p+i), "This is string #%d", i);
	}

	for(i = 0; i < 10; i++) {
		printf("%d: %s\n", i, p[i]); // p[i] same as *(p+i) where p is 
	}

	return 0;
}
