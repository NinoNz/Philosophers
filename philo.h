#ifndef PHILO_H
#define PHILO_H

#include <pthread.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/time.h>
#include <stdio.h>

typedef struct s_philo
{
    int id;
    pthread_t thread;
    bool mange;
    size_t dernier_repas;
    int repas_count;
    pthread_mutex_t *fork_gauche;
    pthread_mutex_t *fork_droite;
} t_philo;

#endif
