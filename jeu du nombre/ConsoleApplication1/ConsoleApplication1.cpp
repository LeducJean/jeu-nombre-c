#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>



int main(int argc, char**argv)
{

	int j;
	printf("Voulez vous jouer ? Entrez '1' si vous le voulez. Sinon tapez '2'.\n");
	scanf("%d", &j);


	if (j == 1)
	{
		while (j == 1)
		{
			int u;
			printf("\nVoulez vous jouer avec 100 ou 1000 nombres ? Entrez '1' pour 100 et '2' pour 1000.\n");
			scanf("%d", &u);

			int s;
			printf("\nVoulez vous jouer a 1 ou 2 joueurs ? Entrez '1' pour le 1 joueur et '2' pour 2 joueurs.\n");
			scanf("%d", &s);

			if (s == 1)
			{

				if (u == 1)
				{

					int nbuti = 101, i = 0;
					srand(time(NULL));

					int nbale = rand() % (100 - 1) + 1;

					printf("\nVous avez decide de jouer.\n");
					printf("\nEntrez un nombre entre 0 et 100 pour essayer de trouver le nombre mystere. (Chance(s) utilisee(s) : %d/6)\n\n", i);
					i++;

					while (!(nbale == nbuti) && !(i == 7))
					{

						scanf("%d", &nbuti);

						if (nbale > nbuti)
						{
							printf("C'est plus ! (Chance(s) utilisee(s) : %d/6)\n\n", i);
							i++;
						}

						else if (nbale < nbuti)
						{
							printf("C'est moins ! (Chance(s) utilisee(s) : %d/6)\n\n", i);
							i++;
						}


					}

					if (nbale == nbuti)
					{
						printf("\nVous avez trouve le nombre mystere en %d coups !\n", i);
					}

					else if (!(nbale == nbuti))
					{
						printf("\nVous n'avez plus de chance. Vous avez perdu...\n");
					}
				}


				else if (u == 2)
				{

					int nbuti = 1001, i = 0;
					srand(time(NULL));

					int nbale = rand() % (1000 - 1) + 1;

					printf("\nVous avez decide de jouer.\n");
					printf("\nEntrez un nombre entre 0 et 1000 pour essayer de trouver le nombre mystere. (Chance(s) utilisee(s) : %d/10)\n\n", i);
					i++;

					while (!(nbale == nbuti) && !(i == 11))
					{

						scanf("%d", &nbuti);

						if (nbale > nbuti)
						{
							printf("C'est plus ! (Chance(s) utilisee(s) : %d/10)\n\n", i);
							i++;
						}

						else if (nbale < nbuti)
						{
							printf("C'est moins ! (Chance(s) utilisee(s) : %d/10)\n\n", i);
							i++;
						}

					}

					if (nbale == nbuti)
					{
						printf("\nVous avez trouve le nombre mystere en %d coups !\n", i);
					}

					else if (!(nbale == nbuti))
					{
						printf("\nVous n'avez plus de chance. Vous avez perdu...\n");
					}
				}
			}








			else if (s == 2)
			{



				if (u == 1)
				{

					int nbuti = 101, i = 0, x;

					printf("\nVous avez decide de jouer.\n");
					printf("\nL'un des deux joueurs entre un nombre et l'autre le devine (Veuillez entrer un nombre entre 0 et 100)\n");
					scanf("%d", &x);


					if (x < 0 || x > 100)
					{
						printf("Partie annulée");
						break;
					}


					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nEntrez un nombre entre 0 et 100 pour essayer de trouver le nombre mystere. (Chance(s) utilisee(s) : %d/6)\n\n", i);
					i++;

					while (!(x == nbuti) && !(i == 7))
					{

						scanf("%d", &nbuti);

						if (x > nbuti)
						{
							printf("C'est plus ! (Chance(s) utilisee(s) : %d/6)\n\n", i);
							i++;
						}

						else if (x < nbuti)
						{
							printf("C'est moins ! (Chance(s) utilisee(s) : %d/6)\n\n", i);
							i++;
						}


					}

					if (x == nbuti)
					{
						printf("\nVous avez trouve le nombre mystere en %d coups !\n", i);
					}

					else if (!(x == nbuti))
					{
						printf("\nVous n'avez plus de chance. Vous avez perdu...\n");
					}
				}


				else if (u == 2)
				{

					int nbuti = 1001, i = 0, x;

					printf("\nVous avez decide de jouer.\n");
					printf("\nL'un des deux joueurs entre un nombre et l'autre le devine (Veuillez entrer un nombre entre 0 et 1000)\n");
					scanf("%d", &x);


					if (x < 0 || x > 1000)
					{
						printf("Partie annulée");
						break;
					}


					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nEntrez un nombre entre 0 et 1000 pour essayer de trouver le nombre mystere. (Chance(s) utilisee(s) : %d/10)\n\n", i);
					i++;



					while (!(x == nbuti) && !(i == 11))
					{

						scanf("%d", &nbuti);

						if (x > nbuti)
						{
							printf("C'est plus ! (Chance(s) utilisee(s) : %d/10)\n\n", i);
							i++;
						}

						else if (x < nbuti)
						{
							printf("C'est moins ! (Chance(s) utilisee(s) : %d/10)\n\n", i);
							i++;
						}


					}

					if (x == nbuti)
					{
						printf("\nVous avez trouve le nombre mystere en %d coups !\n", i);
					}

					else if (!(x == nbuti))
					{
						printf("\nVous n'avez plus de chance. Vous avez perdu...\n");
					}
				}


			}

			printf("\n\nVoulez vous rejouer ? Tapez 1 pour rejouer ou alors tapez 2 pour arreter.\n");
			scanf("%d", &j);
			printf("\n\n\n");

		}

		printf("\nVous avez decide de ne pas jouer.\n\n\n");

	}


	else if (j == 2)
	{

		printf("Vous avez decide de ne pas jouer.\n\n\n");

	}

	return 0;
}