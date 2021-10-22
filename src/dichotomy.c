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

    return position + 1;
}