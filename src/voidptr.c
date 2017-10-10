#include <stdio.h>

void *pointer_array[10]; // we can hold up to 10 void-pointers
int index=0;

void append_pointer(void *p)
{
	pointer_array[index++] = p;
}

void *get_pointer(int i)
{
	return pointer_array[i];
}

int main(void)
{
	char *s = "some data"; // s points to a constant string (char *)
	int a = 10;
	int *b;

	char *s2; // when we call get_pointer(), we'll store them back here
	int *b2;

	b = &a; // b is a pointer to the value of a

	// now let's store them both, even though they're different types
	append_pointer(s); // should be "some data"
	append_pointer(b); // should be 10 or the location of 10
	// they're stored! let's get them back
	s2 = get_pointer(0); // this was at index 0;
	b2 = get_pointer(1); // this was at index 1;

	//printf("%s\t and %d\n", *(char *)append_pointer(s), *(int *) append_pointer(b));
	return 0;
}

