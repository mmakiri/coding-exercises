#include <stdio.h>

int main()
{
    int luku;

    printf("Anna kokonaisluku:");
    scanf("%d", &luku);

    printf("Luku %d on ", luku);

    if (luku % 2 == 0)
        printf("parillinen.");
    else
        printf("pariton.");

    return 0;
}