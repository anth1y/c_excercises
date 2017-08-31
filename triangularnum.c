#include <stdio.h>

// function to calculate the nth triangular number
//

void calculateTriangularNumber (int n)
{
	int i, triangularnumber = 0;

	for (i = 1; i <= n; ++i)
		triangularnumber += i;

	printf("Triangular number %i is %i\n", n, triangularnumber);
}

int main (void)
{
	calculateTriangularNumber (10);
	calculateTriangularNumber (20);
	calculateTriangularNumber (50);

	return 0;
}
