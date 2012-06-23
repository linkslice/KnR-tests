#include <stdio.h>


int main()
{
	int c;
	int tab = ' ';


	while ((c = getchar()) != EOF)
		if (c == '\t') { 
			putchar(tab); 
			putchar(tab); /* yeah yeah I know */
		} else {
			putchar(c);
		}

	return 0;

}
