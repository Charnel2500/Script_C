// Generowanie liczb Fibbonacciego przy użyciu tablic o zmiennej wielkości
#include <stdio.h>

int main (void)
{
    int i, numFibs;
    unsigned long long int Fibonacci[numFibs];  //dobrze jest deklarować zmienne w jednym miejscu


    printf("Ile liczb Fibbonacciego potrzebujesz (od 1 do 75)? ");
    scanf ("%i", &numFibs);
    
    if (numFibs < 1 || numFibs > 75) {
        printf ("Podano nieprawidłową ilość!\n!");
        return 1;
    }
    
    
    Fibonacci[0] = 1;  //z definicji
    Fibonacci[1] = 1;  //jak wyżej
    
    for ( i =2; i < numFibs; ++i )
        Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];
    
    for ( i=0; i < numFibs; ++i )
        printf ("%llu ", Fibonacci[i]);
    
    printf ("\n");
    
    return 0;
}
