#include <stdio.h>

main()
{
	int c;

	while ((c = getchar()) != EOF)
		putchar(c);

	if (c == EOF) printf("%d\n", c);
	
}
