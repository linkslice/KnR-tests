#include <stdio.h>

int main()
{

	int c;

	for (c = 'A' ; c <= 'Z' ; c++)
		printf("%c = %d\t%c = %d %c", c, c, (c + 'a' - 'A'), (c + 'a' - 'A'), (c % 4 == 0 ) ? '\n' : ' ');


	printf("\n");

	return 0;
}

