#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
int main()
{
	char q = 0;
	int w = 0;
	while (scanf("%c", &q) != EOF)
	{
		if (q != '\n')
		{
			w = isalpha(q);
			if (w)
			{
				printf("%c is an alphabet.\n", q);
			}
			else
			{
				printf("%c is not an alphabet.\n", q);
			}
		}
	}
	return 0;
}