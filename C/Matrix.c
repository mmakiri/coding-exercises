#include <stdio.h>

int matriisi[5][5] =
    {
        4, 6, 25, 88, 5,
        34, 5, 300, 4, 65,
        78, 43, 11, 90, 125,
        98, 585, 12, 63, 21,
        45, 35, 9, 5, 1};

int main(void)
{
    int summa = 0;
    printf("Taulukon:\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matriisi[i][j]);
            summa = summa + matriisi[i][j];
        }
        printf("\n");
    }

    printf("\n\nalkioiden summa on %d\n", summa);

    return 0;
}