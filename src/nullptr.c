#include <stdio.h>

int main(void)
{
	int *p = NULL;

	if (p == NULL){
		printf("p is uninitialized!\n");
	} else {
		printf("p points to %d\n", *p);
	}

	return 0;
}
