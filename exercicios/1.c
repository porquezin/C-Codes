#include <stdio.h>

int main()
{

    int i, l, c, matriz[5][5], matriz2[5][5];

    for (l = 0; l < 5; l++)
    {
        for (c = 0; c < 5; c++)
        {
            printf("Num: ");
            scanf("%i", &matriz[l][c]);
        }
    }

    for (l = 0; l < 5; l++)
    {
        for (c = 0; c < 5; c++)
        {
            printf("%2d", matriz[l][c]);
        }
        printf("\n");
    }

    printf("\n");

    for (l = 0; l < 5; l++)
    {
        for (c = 0; c < 5; c++)
        {
            matriz2[l][c] = matriz[l][c];
        }
    }

    for (i = 0; i < 5; i++)
    {
        matriz2[1][i] = matriz[4][i];
        matriz2[4][i] = matriz[1][i];
    }

    for (l = 0; l < 5; l++)
    {
        for (c = 0; c < 5; c++)
        {
            matriz[l][c] = matriz2[l][c];
        }
    }

    for (i = 0; i < 5; i++)
    {
        matriz2[i][3] = matriz[i][0];
        matriz2[i][0] = matriz[i][3];
    }

    for (l = 0; l < 5; l++)
    {
        for (c = 0; c < 5; c++)
        {
            matriz[l][c] = matriz2[l][c];
        }
    }

    for (i = 0; i < 5; i++)
    {
        matriz2[i][i] = matriz[i][4 - i];
        matriz2[i][4 - i] = matriz[i][i];
    }

    for (l = 0; l < 5; l++)
    {
        for (c = 0; c < 5; c++)
        {
            printf("%2d", matriz2[l][c]);
        }
        printf("\n");
    }
}