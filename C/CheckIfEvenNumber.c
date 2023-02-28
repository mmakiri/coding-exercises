#include <stdio.h>

int main()
{
    int luku;

    printf("Anna kokonaisluku:");
    scanf("%d", &luku);

    printf("Luku on ");

    if (luku % 2 == 0)
        printf("0");
    else
        printf("1");

    return 0;
}