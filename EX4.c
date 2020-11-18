#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <ctype.h>

int main() {
	char w = 192;
	char x = 168;
	char y = 129;
	char z = 10;
	char n = 24;
	printf("adresse IPv4 = %c.%c.%c.%c / %c", w, x, y, z, n);
	printf("\nadresse du reseau = %c.%c.%c.0 / %c", w, x, y, n);
	printf("\nadresse broadcast = %c.%c.%c.255", w, x, y);
}