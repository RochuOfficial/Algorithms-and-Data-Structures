#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double tab[10] =
    {
        3.14,  2,  27.61, -8.32, -17.678,
        -3.14, -2, -7.61,  8.32,  17.678,
    };
    int lenght = sizeof(tab)/sizeof(double);
    double srednia = 0.0;
    int i;
    //obliczenie sredniej elementow
    cout << "--------------------" << endl;
    //for (i = 0; i < 10; i++)
    for (i = 0; i < lenght; i++)
    {
        srednia = srednia + tab[i];
    }
    srednia = srednia / lenght;
    cout << "Srednia elemantow tablicy tab wynosi "
         << srednia
         << endl;
    system("PAUSE");
    return 0;
}
