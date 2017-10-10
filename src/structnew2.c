#include <stdio.h>

struct antelope {
	int val;
	float something;
};

int main(void)
{
	struct antelope a;
	struct antelope *b; // this is a pointer to a struct antelope

	b = &a; // let's point b at the address of a

	a.val = 3490; // this is the normal struct usage

	printf("The val field in a is: %d\n",a.val);
	// since b is a pointer, we have to dereference it before we can
	// use it:
	
	(*b).val = 3491;

	printf("The val field in a is: %d\n",(*b).val);
	// but that looks kinda bad, so let's do the exact same thing
	// except this time we'll use the "arrow operator", which is a 
	// bit of syntactic sugar:
	
	b->val = 3491; // EXACTLY the same as above on L20

	printf("The val field in s is: %d\n",b->val);

	return 0;
}
