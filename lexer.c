#include "factors.h"

void lex(FILE *fp)
{
	char line[BUF_SIZE];
	u_int64_t n, half, i;

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
				printf("%s=%lld*%lld\n", line, factor, i);
				break;
			}
			i++;
		}
		freadln(fp, line);
	}
}
