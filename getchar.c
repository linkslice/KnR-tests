#include <stdio.h>

main()
{
	int c;
	
	c = getchar();
	while (c != EOF) {
		/* testing if I can break on enter key */
		/* if (c == 10) { break; } */
		putchar(c);
		c = getchar();
	}
}

