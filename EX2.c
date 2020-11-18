#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main() {
	unsigned long int x = 2868838400;
	int o;
	int b;
	unsigned long int y = 0;
	int p = 4;
	while (y == 0) {
		p = p - 1;
		y = x / pow(256, p);
		o = p + 1;
	}
	p = 8 * o;
	y = 0;
	while (y == 0) {
		p = p - 1;
		y = x / pow(2, p);
		b = p + 1;
	}

	printf("%d", o);
	printf("\n%d", b);
	int i;
	for (i = 1; i <= b; i = i + 1) {
		y = x % 2;
		if (y != 0) {
			printf("\nbit %d : ON", i);
		}
		else {
			printf("\nbit %d : OFF", i);
		}
		x = x >> 1;
	}
	printf("\nBye !");
}