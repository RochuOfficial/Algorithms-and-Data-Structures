// The solution is like in the 1st example

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int ilosc_punktow, ocena;

    cout << "Podaj ilosc punktow ";
    cin  >> ilosc_punktow;

    if (ilosc_punktow >= 90)
    {
        ocena = 5;
    }
    else
    {
        if (ilosc_punktow >= 80)
        {
            ocena = 4;
        }
        else
        {
            if (ilosc_punktow >= 70)
            {
                ocena = 3;
            }
            else
            {
                ocena = 2;
            }
        }
    }

    cout << "Uzyskana ocena wynosi " << ocena << endl;
    system("PAUSE");
    return 0;
}
