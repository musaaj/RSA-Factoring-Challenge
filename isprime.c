#include "factors.h"

long long isprime(long long n)
{
	long half;

	if (n == 2)
		return (1);
	if (!isodd(n))
		return (0);
	half = n >> 1;
	while (half >= 3)
	{
		if (isfactor(n, half))
			return (0);
		half--;
	}
	return (0);
}
