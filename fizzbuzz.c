#include <stdio.h>

int main()
{
	int i;
	for (i = 1; i <= 100; i++){
		if (((i % 3) || (i % 5 )) == 0){
			printf("fizzbuzz=%d\n", i);
		}  else if(i % 3 == 0) {
			printf("fizz=%d\n", i);
		} else if(i % 5 == 0) {
			printf("buzz=%d\n", i);
		}
		else {
		printf("%d\n", i);
		}
	}
}
