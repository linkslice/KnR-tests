#include <stdio.h>


int main()
{
	int c;
	int tab = ' ';


	while ((c = getchar()) != EOF)
		if (c == '\t')  
			putchar(tab);
		else
			putchar(c);

	return 0;

}
