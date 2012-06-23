/*
 * While going through these exercises I realized
 * that I needed an ASCII table pretty often.
 * so I hacked this thing up to print one when I needed.
 */

#include <stdio.h>



int main()
{
	int start = 'A';
	int stop = 'Z';
	int letter;
	int lower;

	letter = start;
	while (letter <= stop) {
		putchar(letter);
		printf(" = %d\t", letter);

		lower = letter + 'a' - 'A';
		putchar(lower);
		printf(" = %d\n", lower);

		letter++;
	}

	return 0;

}
	
