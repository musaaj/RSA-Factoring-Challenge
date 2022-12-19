#include "factors.h"

int main(int argc, char *argv[])
{
	FILE *fp;

	if (argc != 2)
	{
		printf("Usage: factors file");
		exit(0);
	}
	fp = fopen(argv[1], "r");
	if (!fp)
		exit(0);
	lex(fp);
	fclose(fp);
	return (0);
}
