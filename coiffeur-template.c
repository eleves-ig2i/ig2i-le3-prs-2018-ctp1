#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>

#define CHECK(sts,msg) if ((sts) == -1) { perror(msg); exit(sts); }

#define N		3
#define DUREE_OUV	20
#define DUREE_FER	(3 * DUREE_OUV)

unsigned int dureeOuv  = DUREE_OUV;	// décompte durée d’ouverture
//unsigned int nbCL 	    = ???;	// nombre de chaises libres
unsigned int numClient = 0;		// numéro du client traité
//int pid [???];				// tableau des clients actuels
void coiffeur (void) {
    // A compléter
}
void client (unsigned int numClient) {
    // A compléter
}
        
void tuerLesFils(???)
{
    // Ce traitement est activé sur réception d’un CTRL C
    // Terminaison des sémaphores et de tous les processus
    // A compléter
}

void * acquitterLesFils(void *arg)
{
    // Gérer la fin des processus fils à base de la signalisation fils/père
    // A compléter
    pthread_exit(0);
}

int main ()
{
    // Q5 : Mise en place des sémaphores
    //
    // Q3 : Mise en place du processus coiffeur avec la gestion de l’alarme
    //
    // Q4 : Installation du gestionnaire de SIGUSR1
    //
    // Q9 : Installation du gestionnaire du CTRL-C
    //
    // Q8 : Mise en place du thread d’acquittement
    while (1) {
        pause() ;
    }
    return EXIT_SUCCESS;
}
