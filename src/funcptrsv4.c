#include <stdio.h>

void increment(int *p) // note that we are accepting a ponter to an int
{
	*p = *p + 1; // add one to p
}

int main(void)
{
	int i = 10;
	printf("i is %d\n", i); // This will print 10

	increment(&i); // note the address of operand, turns i into a pointer

	printf("i is %d\n", i); // This will print 11

	return 0;

}
