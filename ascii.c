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
	int cr = 1;

	letter = start;
	while (letter <= stop) {
		putchar(letter);
		printf(" = %d\t", letter);

		lower = letter + 'a' - 'A';
		putchar(lower);
		printf(" = %d\t", lower);
		
		if (cr++ % 4 == 0) printf("\n");

		letter++;
	}

	printf("\n");

	return 0;

}
	
