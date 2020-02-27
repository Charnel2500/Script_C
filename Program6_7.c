// Program konwertuje dodatnie liczby ca�kowite na inne systemy liczbowe

#include <stdio.h>

int main (void)
{
    const char baseDigits[16] = {
        '0', '1', '2', '3', '4', '5', '6', '7',
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
    
    int convertedNumber[64];
    long int numberToConvert;
    int nextDigit, base, index = 0;
    
    // pobieramy liczb� i podstaw� systemu
    
    printf ("Jak� liczb� konwertowa�? ");
    scanf ("%ld", &numberToConvert);
    printf ("Podstawa? ");
    scanf ("%i", &base);
    
    // konwersja na system o wskazanej podstawie
    
    do {
        convertedNumber[index] = numberToConvert % base;
        ++index;
        numberToConvert = numberToConvert / base;
    }
    while (numberToConvert != 0);
    
    // prezentacja wyniku - od ko�ca
    
    printf ("Przekszta�cona liczba = ");
    
    for (--index; index >= 0; --index ) {
        nextDigit = convertedNumber[index];
        printf ("%c", baseDigits[nextDigit]);
    }
    
    printf ("\n");
    return 0;
}
