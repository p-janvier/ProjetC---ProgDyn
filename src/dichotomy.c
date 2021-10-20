#include <../include/dichotomy.h>

/**
 * Recherche par dichotomie dans un tableau d'entiers
 * @param array The array of values
 * @param size_t The size of the array
 * @param value The value to find
 * @return The position of the value found or -1
 */
int find_by_dichotomy(int array[], int size_t, int value)
{
    int inf, sup, position, mid;

    //Affiche des valeurs du tableau
    printf("Tableau donné : \n");
    for (int i = 0; i < size_t; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    //Initialisation des extrémités du tableau
    inf = 0;
    sup = size_t - 1;

    //Recherche de la position de la valeur
    position = -1;
    while ((inf <= sup) && (position == -1))
    {
        mid = (sup + inf) / 2;
        if (value < array[mid])
            sup = mid - 1;
        else if (value > array[mid])
            inf = mid + 1;
        else
            position = mid;
    }

    //Affichage du résultat
    if (position == -1)
    {
        printf("La valeur recherchée ne se trouve pas dans le tableau.\n");
    }
    else
    {
        printf("La valeur %d se trouve à la position %d.\n", value, position + 1);
    }
}