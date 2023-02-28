#include <stdio.h>

int main()
{
    int i, luku;

    printf("Anna kokonaisluku:");
    scanf("%d", &luku);

    for (i = 1; i <= luku; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}