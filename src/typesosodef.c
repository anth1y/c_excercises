#include <stdio.h>

struct a_structure_with_a_large_name {
	int a;
	float b;
};

typedef struct a_structure_with_a_large_name NAMESTRUCT;

int main(void)
{
	// we can make a variable of the structure like this:
	struct a_structure_with_a_large_name one_variable;

	// OR we can do it like this:
	NAMESTRUCT another_variable;

	return 0;
}
