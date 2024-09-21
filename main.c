#include <stdio.h>

int main()
{
    int ora1, ora2, minuti1, minuti2, secondi1, secondi2, differenza;
    printf ("calcola la differenza in secondi tra due orari : \n ");
    printf("Inserisci l'ora del primo orario :");
    scanf("%d", &ora1);
    printf ("Inserisci i minuti del primo orario :");
    scanf("%d", &minuti1);
    printf ("Inserisci i secondi del primo orario :");
    scanf("%d", &secondi1);
    printf("Inserisci l'ora del secondo orario :");
    scanf("%d", &ora2);
    printf ("Inserisci i minuti del secondo orario :");
    scanf("%d", &minuti2);
    printf("Inserici i secondi del secondo orario :");
    scanf("%d", &secondi2);
    secondi1 += ora1*3600 + minuti1*60;
    secondi2 += ora2*3600 + minuti2*60;
    if (secondi1 >= secondi2)
    differenza = secondi1 - secondi2;
    else
    differenza = secondi2 - secondi1;
    printf ("La differenza in secondi dei due orari è : %d \n", differenza);
    return 0;
}
