#include <stdio.h>
#include <stdlib.h> //pour aléatoire
#include <time.h>  //pour alétoire

#define MAX 100
#define MIN 1

int main()
{
    int userChoice, random = 0;
    srand(time(NULL)); // On initialise une valeur aléatoire => time(NULL) ce qui renvoit une valeur qu'on appelle le temps Unix (i.e. le temps que s'est écoulé de puis 1er janvier 1970)
    random = (rand() % (MAX - MIN + 1)) + MIN; //!< Cette variable permet de générer un nom aléatoire entre 1 et 1000
    printf("Veuillez choisir un nobmre entre 1 et 100 :\n %d", random);
    scanf("%d", &userChoice);
    int* point = &userChoice;
    printf("%p", point);
    do
    {   

        if (userChoice > random) {
            printf("Le chiffre à deviner est plus petit : ");
            scanf("%d", &userChoice);
        }
        if (userChoice < random) {
            printf("Le chiffre à deviner est plus grand : ");
            scanf("%d", &userChoice);
        }

    } while (userChoice != random);

    printf("Bravo vous avez trouver le nombre.  ");


    return 0;

}