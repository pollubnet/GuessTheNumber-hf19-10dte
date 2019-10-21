#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>

int main()
{
    srand(time(NULL));

    int attempts = 1;
    bool win = false;
    int number = rand() % 100 + 1;

    do
    {
        int guess;
        std::cout << "Podaj liczbe: ";
        std::cin >> guess;
        
        if (guess > number)
        {
            std::cout << attempts << " proba: za duzo!" << std::endl;
            attempts++;
        }
        else if (guess < number)
        {
            std::cout << attempts << " proba: za malo!" << std::endl;
            attempts++;
        }
        else
        {
            std::cout << "Gratulacje: Wygrales w " << attempts << " probie!" << std::endl;
            win = true;
        }

    }
    while (win == false);
}