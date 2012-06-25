/*
 * exercise 2-10 called for converting lower to 
 * use ternary conditions.
 * I decided to try it on my switchcase program
 * just to be extra hard on myself.
 */

#include <stdio.h>

int lower(int);
int upper(int);

int main()
{

	int c;
	
	while ((c = getchar()) != EOF)
		printf("%c", (c>='A' && c<='Z') 
			? lower(c) : (c>='a' && c<='z') 
			? upper(c) : putchar(c)); 
	
	return 0;

}

int lower(int c)
{
	return c + 'a' - 'A';
}

int upper(int c)
{
	return c - 'a' + 'A';
}
