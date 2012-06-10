#include <stdio.h>

main()
{
	int fahr, celcius;
	int lower, upper, step;

	lower = -40;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	fahr = lower;
	while (fahr <= upper) {
		if (fahr % step == 0 || fahr - 32 == 0){	
			celcius = 5 * (fahr-32) /9;
			if (fahr == 32) { 
				printf("%d\t%d\t<freezing>\n", fahr, celcius);
			}else{
				printf("%d\t%d\n", fahr, celcius);
			}
		}
		fahr = fahr + 1;
	}
}
