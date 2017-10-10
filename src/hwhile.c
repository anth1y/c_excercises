#include <stdio.h>
/* print the following output
 *
 * i is now 0!
 * i is now 1!
 * [ i is somewhere between 2 and 7 ]
 * i is now 8!
 * i is now 9!
 */
int main() 
{
	int i = 0;

	while (i < 10) {
		printf("i is now %d!\n", i);
		i++;
	}
printf("All done!\n");
}
