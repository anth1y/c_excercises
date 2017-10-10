#include <stdio.h>

// this code prints:
// 50
// 99
// 3490

int main(void)
{
	           // 0  1   2    3 positions in array
	int a[4] = { 50, 99, 3490, 0 };
	int *p;

        p = a; 
	while(*p > 0) {
		printf("%i\t at %p\n", *p, &p);
		p++; // go to the next int in memory
	}

	return 0;
}
