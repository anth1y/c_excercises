#include <stdio.h>

int main(void)
{
	char *s = "Hello!";

	printf("%s\n", s); // Print's the entire string array of Hello
	printf("%c\n", *s); // Print's the string char of H
	printf("%c\n", s[0]); // Print's the string char of H
	printf("%c\n", s[1]); // Print's the string char of e
	printf("%c\n", s[4]); // Print's the string char of o

	return 0;

}
