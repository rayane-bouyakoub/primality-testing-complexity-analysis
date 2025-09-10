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


int main()
{
    long N = 512000009;
    clock_t start = clock(); // Début de la mesure du temps

    // Vérification si le nombre est premier
    if (N <= 1)
    {
        printf("\nLe nombre %ld n'est pas premier.\n", N);
    }
    else
    {
        int i = 2;
        bool trouv = false;
        while (!trouv && i <= N/2)
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
            printf("\nLe nombre %ld n'est pas premier.\n", N);
        }
        else
        {
            printf("\nLe nombre %ld est premier.\n", N);
        }
    }
    clock_t end = clock(); // Fin de la mesure du temps
    double execution_time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nTemps d'exécution: %f secondes.\n", execution_time);
    return 0;
}
