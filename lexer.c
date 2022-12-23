#include "factors.h"

void lex(FILE *fp)
{
	char line[BUF_SIZE];
	long long n, half;

	freadln(fp, line);
	while(strlen(line))
	{
		n = atoll(line);
		half = n >> 1;

		while (half > 0)
		{
			long long factor = isfactor(n, half);
			if (factor)
			{
				printf("%ld=%ld*%ld\n", n, half, factor);
				break;
			}
			half >>= 1;
		}
		freadln(fp, line);
	}
}
