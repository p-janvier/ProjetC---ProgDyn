/**
 * @file glouton.h
 * @author Pierre JANVIER
 * @brief Header de glouton.c
 * @version 1.0
 * @date 2021-10-23
 * @copyright Copyright (c) 2021
 */

typedef struct
{
    int weight;
    int value;
} Glouton;

void triGlouton(Glouton g[], int tabsize);
float findGlouton(Glouton g[], int tabsize, int maxWeight);