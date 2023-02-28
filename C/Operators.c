#include <stdio.h>

int main()
{
    char juoma;
    int kuppi_maara;

    printf("Juotko kahvia vai teetä (k/t)?");
    scanf("%c", &juoma);

    printf("Montako kuppia juot päivässä:");
    scanf("%d", &kuppi_maara);

    if (juoma == 'k')
    {
        if (kuppi_maara > 0 && kuppi_maara <= 2)
        {

            printf("Et taida juoda paljoa kahvia.");
        }
        else if (kuppi_maara > 2 && kuppi_maara <= 20)
        {
            printf("Juotpa paljon kahvia!");
        }
        else
            printf("Ohjelmassa tapahtunut virhe!");
    }
    else if (juoma == 't')
    {
        if (kuppi_maara > 0 && kuppi_maara <= 2)
        {

            printf("Et taida juoda paljoa teetä.");
        }
        else if (kuppi_maara > 2 && kuppi_maara <= 20)
        {
            printf("Juotpa paljon teetä!");
        }
        else
            printf("Ohjelmassa tapahtunut virhe!");
    }
    else
        printf("Ohjelmassa tapahtunut virhe!");

    return 0;
}