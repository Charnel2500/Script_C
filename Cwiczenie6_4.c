// Program wyliczający średnią z 10 liczb zmiennoprzecinkowych

#include <stdio.h>

int main (void)
{
    int i;
    float average, averageNumbers[11], response;
    
    printf("Wpisz 10 dowolnych liczb zmiennoprzecinkowych");
    for (i = 1; i <= 10; ++i) {
        scanf ("%f", &response);
        averageNumbers[i] = response;
    }
    
    printf ("Średnia ocen wynosi");
        for (i = 1; i <= 10; ++i) {
            printf("Wpisane liczby: %f", averageNumbers[i]);
        }
    return 0;
}
    
        
        
