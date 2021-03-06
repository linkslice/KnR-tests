/*
 * While going through these exercises I realized
 * that I needed an ASCII table pretty often.
 * so I hacked this thing up to print one when I needed.
 */

#include <stdio.h>



int main()
{
	int letter, start, stop;
	letter = start 	= 'A';
	stop 		= 'Z';
	int lower;
	int cr = 1;

	int nums = 48;

	while (letter <= stop) {
		putchar(letter);
		printf(" = %d\t", letter);

		lower = letter++ + 'a' - 'A';

		putchar(lower);
		printf(" = %d\t", lower);
		
		if (cr++ % 2 == 0) {
			putchar(nums);
			printf(" = %d\n", nums++);
		}

	}

	return 0;

}
	
