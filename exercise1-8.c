/*
 * a Program to count blanks, tabs, and newlines
 */

#include <stdio.h>

main()
{
	int c;
	int blanks, tabs, newlines = 0;

	while ((c = getchar()) != EOF ) {
		if (c == ' ') ++blanks;
		if (c == '\t') ++tabs;
		if (c == '\n') ++newlines;
	}
	printf("blanks: %d\ntabs: %d\nnewlines: %d\n", blanks, tabs, newlines);
}
