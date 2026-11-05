#include <stdio.h>

int main()
{
    int nombre;

    printf("Entrez un nombre entre 0 et 100 : ");
    if (scanf("%d", &nombre) != 1 || nombre < 0 || nombre > 100)
    {
        printf("Nombre invalide. Saisissez un entier entre 0 et 100.\n");
        return 1;
    }

    for (int multiple = 0; multiple <= nombre; multiple += 5)
    {
        printf("%d\n", multiple);
    }

    return 0;
}