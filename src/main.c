/**
 * @file main.c
 * @author Pierre JANVIER
 * @brief Fichier permettant l'exécution des différentes fonctions à tester
 * @version 1.0
 * @date 2021-10-23
 * @copyright Copyright (c) 2021
 * @mainpage
 * L'objectif de ce tp est de réaliser 3 exercices puis de les tester.\n
 * Le premier exercice est une recherche par dichotomie.\n
 * Le second exercice est de réaliser un algorithme glouton.\n
 * Le dernier exercice est le problème du plus grand carré libre.\n
 */

#include <stdio.h>
#include <stdlib.h>

#include <../include/dichotomy.h>
#include <../include/glouton.h>

int main()
{
	//Test de la dichotomie
	printf("*****************\n");
	printf("Début exercice 1\n\n");

	int tableau[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	int tabsize = sizeof(tableau) / sizeof(tableau[0]);
	int value;

	printf("Quel valeur voulez vous chercher ?\n");
	scanf("%d", &value);
	if (find_by_dichotomy(tableau, tabsize, value))
	{
		printf("La valeur %d se trouve à la position %d.\n\n", value, find_by_dichotomy(tableau, tabsize, value));
	}
	else
	{
		printf("La valeur que vous cherchez ne se trouve pas dans le tableau.\n\n");
	}
	printf("Fin exercice 1\n");
	printf("*****************\n\n");

	//Test du tri glouton
	printf("*****************\n");
	printf("Début exercice 2\n\n");
	Glouton g[3];
	Glouton g1;
	g1.value = 14;
	g1.weight = 12;
	g[0] = g1;
	Glouton g2;
	g2.value = 10;
	g2.weight = 10;
	g[1] = g2;
	Glouton g3;
	g3.value = 11;
	g3.weight = 13;
	g[2] = g3;
	float maxWeight = 30;
	int sizetab = 3;
	triGlouton(g, sizetab);
	float totalWeight = findGlouton(g, sizetab, maxWeight);
	printf("Le poids total du sac à dos est de %.2fkg, par conséquent ce dernier est rempli de %.2fkg.\n\n", maxWeight, totalWeight);
	printf("Fin exercice 2\n");
	printf("*****************\n\n");
}