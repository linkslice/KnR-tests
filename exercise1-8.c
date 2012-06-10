/*
 * a Program to count blanks, tabs, and newlines
 */

#include <stdio.h>

main()
{
	int c;
	int blanks, tabs, newlines = 0;

	while ((c = getchar()) != EOF ) {
		if (c == '\t') ++tabs;
		if (c == '\n') ++newlines;
	}
	printf("tabs: %d\nnewlines: %d\n", tabs, newlines);
}
