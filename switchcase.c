#include <stdio.h>

int lower(int);
int upper(int);

int main()
{

	int c;
	
	while ((c = getchar()) != EOF)
		if (c >= 'A' && c <='Z'){
			putchar(lower(c));
		} else if (c <= 'z' && c >= 'a') {
			putchar(upper(c));
		} else {
			putchar(c);
		}
	
	
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
