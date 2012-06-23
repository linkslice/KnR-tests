head	1.1;
access;
symbols;
locks; strict;
comment	@# @;


1.1
date	2012.06.23.06.14.31;	author hackman;	state Exp;
branches;
next	;


desc
@
help
@


1.1
log
@Initial revision
@
text
@#include <stdio.h>

main()
{
	int c;
	
	c = getchar();
	while (c != EOF) {
		/* testing if I can break on enter key */
		/* if (c == 10) { break; } */
		putchar(c);
		c = getchar();
	}
}
@
