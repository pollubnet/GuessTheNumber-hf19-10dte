#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int attempts = 1;
    char win = 0;
    int number = rand() % 100 + 1;

    do
    {
        int guess;
        printf("Podaj liczbe: ");
        scanf("%d", &guess);
        
        if (guess > number)
        {
            printf("%d proba: za duzo!\n", &attempts);
            attempts++;
        }
        else if (guess < number)
        {
            printf("%d proba: za malo!\n");
            attempts++;
        }
        else
        {
            printf("Gratulacje: Wygrales w %d probie!\n");
            win = 1;
        }

    }
    while (win == 1);
}