#include <stdio.h>

int frotz(int a)
{
	int b;

	b = 10; // in scope from local def on line 5
	a = 20; // in scope from parameter of frotz line 3
	c = 30; // ERROR out of scope  (declared in another block, in main())
}

int main(void)
{
	int c;

	c = 20; // in scope defined on line 14
	b = 30; // out of scope only declared 

	return 0;
}
