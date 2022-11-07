#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include "stdlib.h"




int partie() {
	int choix, note;
	int alea = rand() % 100 + 1;
	int x;
	note = 0;
	for (x = 1; x <= 8; x++) {
		printf("Trouve le Nombre Mystere compris entre 1 et 100: ");
		scanf("%d", &choix);
		if (choix == alea) {
			printf("Bravo !!\n");
			x = 9;
			note = note + 1;
		}
		else if (choix > alea) {
			printf("Le Nombre Mystere est plus petit !\n");
			printf("Il te reste %d tentative\n", 8 - x);
		}
		else if (choix < alea) {
			printf("Le Nombre Mystere est plus grand !\n");
			printf("\n Il te reste %d tentative\n", 8 - x);
		}
		if (x == 8 && choix != alea) {
			printf("Perdu ! Le Nombre Mystere etait %d !", alea);
		}
	}
	return note;
}


int main()
{
	int note, y;
	srand(time(NULL));
	note = 0;
	for (y = 1; y <= 10; y++) {

		note += partie();
		printf(" Ta Note pour l' instant est de %d / %d\n \n", note, y);
	}
	switch (note) {
	case 10:
		printf("T'es un crack fait moi l'amour !");
		break;
	case 9:
	case 8:
	case 7:
	case 6:
	case 5:
		printf("GG mon reuf");
		break;
	default:
		printf("T'es vraiment pas ouf");

	}
	printf(" Jeu Termine ;-]");

	return 0;
}