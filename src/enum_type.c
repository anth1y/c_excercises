#include <stdio.h>

enum fishtypes {
	HALIBUT,
	TUBESNOUT,
	SEABASS,
	ROCKFISH
};

int main(void)
{
	enum fishtypes fish1 = SEABASS;
	enum fishtypes fish2;

	if (fish1 == SEABASS) {
		fish2 = TUBESNOUT;
	}

	return 0;
}
