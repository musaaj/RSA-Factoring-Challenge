#include "factors.h"

u_int64_t _atol(char *s)
{
	u_int64_t result;
	int len;
	u_int64_t n;
	u_int64_t factor;

	if (!s)
	{
		fprintf(stderr, "Error: Null passed to _atol\n");
		exit(1);
	}
	len = strlen(s);
	factor = 1;
	result = 0;
	while (len)
	{
		--len;
		n = (u_int64_t)(s[len] - 48) * factor;
		result += n;
		factor *= 10;
	}
	return (result);
}
