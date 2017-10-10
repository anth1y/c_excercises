#include <stdio.h>

int main(void)
{
	int i, i2;

	scanf("%d", &i); // read i from stdin live and direct from the keyboard

	// now change stdin to refer to a file instead of a keyboard
	freopen("someints.txt", "r", stdin );

	scanf("%d", &i2); // now read this from the file "someints"

	printf("Hello World!\n"); // to the screen err stdout err 

	// change stdout to go to a file instead of the terminal:
	freopen("output.txt", "w", stdout);

	printf("This goes to the file \"output.txt\"\n");

	// some systems we can do this -- change the mode of a file like chmod
	freopen(NULL, "wb", stdout); // change to "wb" instead of "w"

	return 0;
}
