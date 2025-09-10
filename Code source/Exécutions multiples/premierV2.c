#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>


/*

----------------------------- TP1 CRP V2 ------------------------------

--------------- Nom et prénom(s) Étudiant 1: ABOUD Ibrahim ------------

------------- Nom et prénom(s) Étudiant 2: BOUYAKOUB Rayane -----------

------------------------- Groupe: 2 SID 1 -----------------------------

*/


#define NUM_EXECUTIONS 1000 // Nombre de répétitions pour le calcul de la moyenne

int main()
{
    long N = 8000009;
    double total_time = 0.0; // Pour accumuler le temps total

    for (int exec = 0; exec < NUM_EXECUTIONS; exec++)
    {
        clock_t start = clock(); // Début de la mesure du temps

        // Vérification si le nombre est premier
        if (N <= 1)
        {
            printf("Le nombre %ld n'est pas premier.\n", N);
        }
        else
        {
            int i = 2;
            bool trouv = false;
            while (!trouv && i <= N / 2)
            {
                if (N % i == 0)
                {
                    trouv = true;
                }
                else
                {
                    i++;
                }
            }
            if (trouv)
            {
                printf(" Le nombre %ld n'est pas premier.\n", N);
            }
            else
            {
                printf(" Le nombre %ld est premier.\n", N);
            }
        }

        clock_t end = clock(); // Fin de la mesure du temps
        double execution_time = (double)(end - start) / CLOCKS_PER_SEC;
        total_time += execution_time; // Ajouter le temps d'exécution à la somme totale
        printf("\n Temps d'exécution pour l'exécution %d : %f secondes", exec + 1, execution_time);
    }

    // Calcul de la moyenne du temps d'exécution
    double average_time = total_time / NUM_EXECUTIONS;
    printf("\n\n Temps moyen d'exécution sur %d exécutions : %f secondes\n", NUM_EXECUTIONS, average_time);

    return 0;
}
