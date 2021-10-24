/**
 * @file glouton.c
 * @author Pierre JANVIER
 * @brief Fichier permettant de réaliser un algorithme glouton 
 * @version 1.0
 * @date 2021-10-23
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <../include/glouton.h>

/**
 * @brief Tri d'un tableau avec la méthode du sac à dos
 * @param g 
 * @param tabsize 
 */
void triGlouton(Glouton g[], int tabsize)
{
    Glouton temp;
    for (int i = 0; i < tabsize - 1; i++)
    {
        for (int j = i + 1; j < tabsize; j++)
        {
            if (g[i].value / g[i].weight <= g[j].value / g[j].weight)
            {
                temp.weight = g[i].weight;
                temp.value = g[i].value;
                g[i] = g[j];
                g[j] = temp;
            }
        }
    }
}

/**
 * @brief Détermine le poids du sac à dos en fonction de sa valeur maximale et des différents objets
 * @param g 
 * @param tabsize 
 * @param maxWeight 
 * @return float 
 */
float findGlouton(Glouton g[], int tabsize, int maxWeight)
{
    float totalValue = 0;
    for (int i = 0; i < tabsize; ++i)
    {
        if (g[i].weight <= maxWeight)
        {
            maxWeight -= g[i].weight;
            totalValue += g[i].weight;
        }
    }
    return totalValue;
}