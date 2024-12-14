#include <cstdlib>
#include <iostream>

using namespace std;

//tablica liczb calkowitych
int main(int argc, char *argv[])
{
    int tab[10] = { 2, 1, 3, 6, 8, 4, 5, 10, 7, 9 };
    int i, x, element_maksymalny;
    //wywietlenie tablicy
    cout << "--------------------" << endl;
    for (i = 0; i < 10; i++)
    {
        cout << "Pod indeksem  "
             << i
             << "w tablicy tab jest liczba "
             << tab[i]
             << endl;
    }
    //zamiana par elementow miejscami
    for (i = 0; i < 10; i += 2)
    {
        x = tab[i];
        tab[i] = tab[i + 1];
        tab[i + 1] = x;
    }
    //wywietlenie tablicy
    cout << "--------------------" << endl;
    for (i = 0; i < 10; i++)
    {
        cout << "Pod indeksem  "
             << i
             << " w tablicy tab jest liczba "
             << tab[i]
             << endl;
    }
    //znajdowanie elementu maksymalnego
    cout << "--------------------" << endl;
    element_maksymalny = tab[0];
    for (i = 1; i < 10; i++)
    {
        if (tab[i] > element_maksymalny)
        {
            element_maksymalny = tab[i];
        }
    }
    cout << "Element maksymalny w tablicy tab wynosi "
         << element_maksymalny
         << endl;
    system("PAUSE");
    return 0;
}
