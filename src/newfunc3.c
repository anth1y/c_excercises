#include <stdio.h>

void printmessage (void)
{
	printf("Programming is fun.\n");

}

int main (void)
{
	int i;

	for(i = 1; i <= 5; ++i)
		printmessage();
	
	return 0;
}
