#include <stdio.h>
#include <stdlib.h>

#include <../include/dichotomy.h>
#include <../include/glouton.h>

int main()
{
	int tableau[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	int tabsize = sizeof(tableau) / sizeof(tableau[0]);
	int value;

	printf("Quel valeur voulez vous chercher ?\n");
	scanf("%d", &value);
	printf("\n");
	if (find_by_dichotomy(tableau, tabsize, value))
	{
		printf("La valeur %d se trouve à la position %d.\n\n", value, find_by_dichotomy(tableau, tabsize, value));
	}
	else
	{
		printf("La valeur que vous cherchez ne se trouve pas dans le tableau.\n\n");
	}

	// struct Glouton g = {{60, 100, 120}, {10, 20, 30}};

	// int prix[] = {60, 100, 120};
	// int poids[] = {10, 20, 30};
	// int poidsMax = 50;
	// int tabsize = sizeof(prix) / sizeof(prix[0]);
	// printf("%d\n\n", knapSack(poidsMax, poids, prix, tabsize));
}