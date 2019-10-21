#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    srand(time(0));

    int n {rand()%100+1};
    bool w {false};
    int i {0};
    int number;

    do
    {
        std::cout << "Podaj liczbe: ";
        std::cin >> number;
        i++;

        if (number > n)
            std::cout << "Za duzo!\n";

        else if (number < n)
            std::cout << "Za malo!\n";

        else
        {
            std::cout << "Wygrales w " << i << " probie!\n";
            w = true;
        }
    }
    while (w == false);

    return 0;
}
