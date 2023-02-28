#include <stdio.h>

int main(void)
{
    char etunimi[15], sukunimi[20], tiedostonimi[13];
    
    printf("Ohjelma tallentaa etunimesi ja sukunimesi tiedostoon.\nSyötä etunimesi:");
    scanf("%s", etunimi);

    printf("Syötä sukunimesi:");
    scanf("%s", sukunimi);

    printf("Tiedosto johon haluat tallentaa nimesi:");
    scanf("%s", tiedostonimi);

    FILE *tiedosto = fopen(tiedostonimi, "a");

    fprintf(tiedosto, "%s %s", etunimi, sukunimi);
    fclose(tiedosto);

    printf("\n\nTallennus onnistui!");

    return 0;
}