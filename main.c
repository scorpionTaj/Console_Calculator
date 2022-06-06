
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int op, n1, n2;
    float res;
    char ch;
    do
    {
        printf (" Selectionnez une operation pour effectuer le calcul dans la calculatrice C: ");
        printf (" \n 1 Addition  \t \t 2 Soustraction \n 3 Multiplication \t 4 Division \n 5 Carre \t \t 6 Racine carree \n 7 Exit \n \n SVP, faites un choix  : ");

        scanf ("%d", &op);


    // use switch statement to call an operation
    switch (op)
    {
        case 1:
            printf (" Tu choisis: Addition");
            printf ("\n Entrez le premier numero: ");
            scanf (" %d", &n1);
            printf (" Entrez le deuxieme numero: ");
            scanf (" %d", &n2);
            res = n1 + n2;
            printf (" L'addition de deux nombres est: %.2f", res);
            break;

        case 2:
            printf (" Tu choisis: Sustraction");
            printf ("\n Entrez le premier numero: ");
            scanf (" %d", &n1);
            printf (" Entrez le deuxieme numero: ");
            scanf (" %d", &n2);
            res = n1 - n2;
            printf (" La soustraction de deux nombres est: %.2f", res);
            break;

        case 3:
            printf (" Tu choisis: Multiplication");
            printf ("\n Entrez le premier numero: ");
            scanf (" %d", &n1);
            printf (" Entrez le deuxieme numero: ");
            scanf (" %d", &n2);
            res = n1 * n2;
            printf (" Multiplication de deux nombres est: %.2f", res);
            break;

        case 4:
            printf (" Tu choisis: Division");
            printf ("\n Entrez le premier numero: ");
            scanf (" %d", &n1);
            printf (" Entrez le deuxieme numero: ");
            scanf (" %d", &n2);
            if (n2 == 0)
                {
                    printf (" \n Le diviseur ne peut pas etre nul. Veuillez saisir une autre valeur ");
                    scanf ("%d", &n2);
                }

            printf (" La division de deux nombres est: %.2f", res);
            break;

        case 5:
            printf (" Tu choisis: Carre");
            printf ("\n Entrez le premier numero: ");
            scanf (" %d", &n1);

            res = n1 * n1;
            printf (" Carre of %d number is: %.2f", n1, res);
            break;

        case 6:
            printf (" Tu choisis: Racine carree");
            printf ("\n Entrez le premier numero: ");
            scanf (" %d", &n1);

            res = sqrt(n1);
            printf (" Racine carree of %d numbers is: %.2f", n1, res);
            break;

        case 7:
            printf (" Tu choisis: Sortir");
            exit(0);
            break;

        default:
            printf(" Quelque chose ne va pas!! ");
            break;
    }
    printf (" \n \n ********************************************** \n ");
    } while (op != 7);

    return 0;
}
