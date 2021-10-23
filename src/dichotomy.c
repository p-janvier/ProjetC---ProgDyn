/**
 * @file dichotomy.c
 * @author Pierre JANVIER
 * @brief Fichier contenant la fonction de recherche par dichotomie
 * @version 1.0
 * @date 2021-10-23
 * @copyright Copyright (c) 2021
 */

#include <../include/dichotomy.h>

/**
 * @brief Recherche par dichotomie dans un tableau d'entiers
 * @param array 
 * @param size_t 
 * @param value 
 * @return int 
 */
int find_by_dichotomy(int array[], int size_t, int value)
{
    int inf, sup, position, mid;

    inf = 0;
    sup = size_t - 1;
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