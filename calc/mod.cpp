#include "sub.h"

int mod(int x, int y)
{
	int count = 0;
	while (x > y) {
		x = sub(x, y);
	}
	return x;
}