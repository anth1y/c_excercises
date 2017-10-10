#include <stdio.h>

int main(void)
{
	int i;
	int *p; // this is NOT a dereference this is a type int*
        
	p = &i; // p now points to i

	i = 10; // i is now 10
	*p = 20; // i (yes i!) is now 20!!
        printf("i is %d\n", i); // this is 20
        printf("i is %d\n", *p); // this is also 20	

	return 0;

}
