#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <ctype.h>

int main() {
	float tableau[29] = { 0 };
	float x = 0;
	int a = 0;
	char ch;
	int b = 0;
	while (a < 30 && b == 0) {
		printf("Entrer la note %d : ", a + 1);
		scanf_s("%f", &x);
		if (x >= 0 && x <= 20) {
			tableau[a] = x;
		}
		else {
			printf("Eleve absent ? ou voulez-vous arreter la saisie des notes ? A/O/N : \n");
			ch = _getch();
			ch = toupper(ch);
			switch (ch)
			{
			case 'A':
				tableau[a] = -1;
				break;
			case 'O':
				b = 1;
				a = a - 1;
				break;
			case 'N':
				a = a - 1;
				break;
			}
		}
		a = a + 1;
	}
	int i;
	int absent = 0;
	float somme = 0;
	for (i = 0; i <= a - 1; i++) {
		if (tableau[i] == -1) {
			absent = absent + 1;
		}
		else {
			somme = somme + tableau[i];
		}
	}
	float moy = somme / a;
	printf("la moyenne des %d notes est de : %f", a, moy);
	printf("\nil y a %d absences", absent);

}