#include <stdio.h>

int deliver_fruit(char *address, float speed)
{
	printf("Delivering fruit to %s at speed %.2f\n", address, speed);
	
	return 3490;
}

int main(void)
{
	int (*p)(char*,float); // declare a function pointer variable

	p = deliver_fruit; // p now points to the deliver_fruit() function

	deliver_fruit("My house", 5280.0); // a normal call

	p("My house", 5280); // the same call, but using the pointer

	printf("%s\n", p);
	return 0;
}


