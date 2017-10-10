#include <stdio.h>

void get_string(int a, char **s)
{
	switch(a) {
		case 0:
			*s = "everybody";
			break;

		case 1:
			*s = "was";
			break;

		case 2:
			*s = "kung foo fighting";
			break;

		default:
			*s = "errrrrn!";
	}
}

int main(void)
{
	char *s;

	get_string(2, &s);

	printf("s is \"%s %p\"\n", s, s); // 

	return 0;
}
