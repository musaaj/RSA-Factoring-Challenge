#include "factors.h"

long long isfactor(long long n1, long long n2)
{
	if (n1 % n2 == 0)
		return (n1 / n2);
	return (0);
}
