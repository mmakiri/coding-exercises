#include <stdio.h>

int main(void)
{
    char sana[15], vokaalilista[] = "aeiouy";
    int vokaalimaara = 0;

    printf("Ohjelma laskee vokaalien määriä.\nAnna sana:");
    scanf("%s", sana);

    for (int i = 0; i < 15; i++)
    {
        for (int n = 0; n < 6; n++)
        {
            if (sana[i] == vokaalilista[n])
            {
                vokaalimaara++;
            }
        }
    }

    printf("\nSanassa vokaaleja: %d\n", vokaalimaara);

    return 0;
}