#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int n = rand() % 100;
    int ile=0;
    char w = 0;

    do
    {
        printf("Podaj liczbe: ");
        int l;
        scanf("%d", &l);

        if (l > n)
        {
            printf("Za duzo!\n");
            ile=ile+1;
        }
        else if (l < n)
        {
            printf("Za malo!\n");
            ile=ile+1;
        }
        else
        {
            printf("Wygrales! w %d probie\n",ile);
            w = 1;
        }

    }
    while (w == 0);
}
