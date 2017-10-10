#include <stdio.h>

// Here we declare the type so we can use it later
struct stuff{
	int val;
	float b;
};

// Note we don't have any variables of the type struct yet.
int main(void)
{
	// ok now let's declare a variable 's' of type "struct stuff"
	struct stuff s;

	s.val = 3490;
	s.b = 3.14159;

	printf("The val field in s is: %d\n", s.val);

	return 0;
}
