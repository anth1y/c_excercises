#include <stdio.h>

// this is a global variable. We know it's global, because it's
// been declared in "global scope", and not in a basic block somewhere
int g = 10;

void afunc(int x)
{
	g = x; // this sets the global variable to whatever 'x' is
}

int main(void)
{
	g = 10; // global var 'g' is now 10
	afunc(20); // but this function will set it to 20
	printf("%d\n", g);

	return 0;
}
