#include <stdio.h>
#include "operations.h"

int main()
{
    int nb1, nb2;

    printf("Veuillez entrer le permier nombre:\n");
    scanf("%d", &nb1);
    printf("Veuillez entrer le deuxième nombre:\n");
    scanf("%d", &nb2);

    printf("la somme est de : %d \n", addition(nb1, nb2));
    printf("la différence est de : %d\n", soustraction(nb1, nb2));
    printf("le produit est de : %d\n", multiplication(nb1, nb2));
    printf("le quotient est de : %f\n", division(nb1, nb2));
  
    return (0);
}