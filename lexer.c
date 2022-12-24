#include "factors.h"

void lex(FILE *fp)
{
	char line[BUF_SIZE];
	u_int64_t n, half, i;
	__uint128_t a = 18234576894246378;

	freadln(fp, line);
	while(strlen(line))
	{
		n = _atol(line);
		if (n == 0)
		{
			fprintf(stderr, "Error: number overflow\n");
			exit(1);
		}
		half = n >> 1;
		i = 2;
		while (i <= half)
		{
			u_int64_t factor = isfactor(n, i);
			if (factor)
			{
				printf("%llu=%llu*%llu\n", n, factor, i);
				break;
			}
			i++;
		}
		freadln(fp, line);
	}
}
