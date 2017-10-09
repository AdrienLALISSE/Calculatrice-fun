#include <stdio.h>
#include <stdlib.h>

int main()
{
    int prog;
    int operation;
    int a,b,resultat;

    printf("=== Menu ===\n\n");
    printf("1.Operation\n");
    printf("2.Fermer programme\n");

    printf("\n\n");

    scanf("%d", &prog);

    while (prog < 2)
    {
    printf("=== Operation ===\n\n");
    printf("1.Addition\n");
    printf("2.Soustraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");

    printf("\n\n");

    scanf("%d", &operation);

    printf("\n");

    switch(operation)
        {
    case 1:
        printf("Tu as choisi l'addition :\n");
        printf("a= ");
        scanf("%d", &a);
        printf("b= ");
        scanf("%d", &b);
        resultat = a+b;
        printf("%d + %d = %d\n", a, b, resultat);
        break;
    case 2:
        printf("Tu as choisi la soustraction :\n");
        printf("a= ");
        scanf("%d", &a);
        printf("b= ");
        scanf("%d", &b);
        resultat = a-b;
        printf("%d - %d = %d\n", a, b, resultat);
        break;
    case 3:
        printf("Tu as choisi la multiplication :\n");
        printf("a= ");
        scanf("%d", &a);
        printf("b= ");
        scanf("%d", &b);
        resultat = a*b;
        printf("%d x %d = %d\n", a, b, resultat);
        break;
    case 4:
        printf("Tu as choisi la division :\n");
        printf("a= ");
        scanf("%d", &a);
        printf("b= ");
        scanf("%d", &b);
        resultat = a/b;
        printf("%d / %d = %d\n", a, b, resultat);
        break;
        }

    printf("\n\n");

    printf("Faire un nouveau calcul ?\n");
    printf("1.Oui\n");
    printf("2.Non et Fermer le programme\n");
    scanf("%d", &prog);
    printf("\n\n");
    }
    return 0;
}
