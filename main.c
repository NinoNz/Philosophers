#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "philo.h" 
typedef struct 
{
    int id;
    char *nom;
} philosophe;

void afficher_philosophe(philosophe *philo)
{
    printf("Philosophe %d: %s\n, philo");
}
int main()
{
    philosophe philo1;
    philo1.id = 1;
    philo1.nom = "socrate";

    afficher_philosophe(&philo1);

    return(0);
}