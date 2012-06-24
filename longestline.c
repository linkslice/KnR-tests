#include <stdio.h>

#define MAXLINE 1000 /* max input line */

int getline(char line[], int macline);
void copy(char to[], char from[]);

main()
{
	int len;		/* current line length */
	int max;		/* max lenght so far   */
	char line[MAXLINE];	/* current input line  */
	char longest[MAXLINE];  /* longest saved line  */

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0) /* found a line */
		printf("%s\n", longest);
	return 0;
}

/* getline; read a lineinto s, return length */
int getline(char s[], int lim)
{
	int c, i;

	for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i++] = 0;
	}
	s[i] = '\0';
	return i;
}

/* copy; copy from into to; assume it's big enough */
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}

