int max(int a, int b)
{
    return (a > b) ? a : b;
}

int knapSack(int poidsMax, int poids[], int prix[], int tabsize)
{
    int K[tabsize + 1][poidsMax + 1];
    for (int i = 0; i <= tabsize; i++)
    {
        for (int w = 0; w <= poidsMax; w++)
        {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (poids[i - 1] <= w)
                K[i][w] = max(
                    prix[i - 1] + K[i - 1][w - poids[i - 1]],
                    K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }

    return K[tabsize][poidsMax];
}