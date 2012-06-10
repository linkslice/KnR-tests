#include <stdio.h>

main()
{
	int c;
	
	c = getchar();
	while (c != EOF) {
		/* if (c == 10) { break; } */
		putchar(c);
		c = getchar();
	}
}
