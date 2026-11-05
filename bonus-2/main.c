#include <stdio.h>

int main()
{
    int nombre;

    printf("Entrez un nombre entre 0 et 20 : ");
    if (scanf("%d", &nombre) != 1 || nombre < 0 || nombre > 20)
    {
        printf("Nombre invalide. Saisissez un entier entre 0 et 20.\n");
        return 1;
    }
    int temp = 1;
    for (int i = 1; i <= nombre; i++)
    {
        temp = temp * i;
    }
    printf("%d\n", temp);

    return 0;
}