#include "factors.h"

void lex(FILE *fp)
{
	char line[BUF_SIZE];
	long n, half;

	freadln(fp, line);
	while(strlen(line))
	{
		n = atol(line);
		half = n / 2;

		while (half > 0)
		{
			if (!isfactor(n, half))
			{
				printf("%ld=%ld*%ld\n", n, half, n / half);
				break;
			}
			--half;
		}
		freadln(fp, line);
	}
}
