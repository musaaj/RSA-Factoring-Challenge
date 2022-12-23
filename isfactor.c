#include "factors.h"

u_int64_t isfactor(u_int64_t n1, u_int64_t n2)
{
	if (n2 == 0)
		exit(1);
	if (n1 % n2 == 0)
		return (n1 / n2);
	return (0);
}
