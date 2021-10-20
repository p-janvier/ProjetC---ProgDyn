#include <stdio.h>

#include <../include/dichotomy.h>

int main()
{
	int tableau[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	int tabsize = sizeof(tableau) / sizeof(tableau[0]);
	int value;

	printf("Quel valeur voulez vous chercher ?\n");
	scanf("%d", &value);

	find_by_dichotomy(tableau, tabsize, value);
}