#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int n = rand() % 101;
    int counter = 0;
    char w = 0;

    do
    {
        printf("Podaj liczbe: ");
        int l;
        scanf("%d", &l);
        
        if (l > n)
        {
            printf("Za duzo!\n");
	    counter++;
        }
        else if (l < n)
        {
            printf("Za malo!\n");
	    counter++;
        }
        else
        {
            printf("Wygrales!\n");
	    printf("Udalo Ci sie za proba numer: %d", counter)
            w = 1;
        }	
    }

    while (w == 0);
}
