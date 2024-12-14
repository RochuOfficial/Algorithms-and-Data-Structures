#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    ////////////////////////////////////
    //petla do while
    ////////////////////////////////////
    char znak;
    do
    {
        cout << "Czy chcesz kontynuowac [t/n]? ";
        cin  >> znak;
    }
    while (znak != 't' && znak != 'n');
    if (znak == 'n') return 0;

    ////////////////////////////////////
    //petla while
    ////////////////////////////////////
    int liczba, ilosc_cyfr = 1, temp;
    cout << "Podaj liczbe, to podam ile ma cyfr: ";
    cin  >> liczba;
    temp = liczba;
    if (temp<0) temp *= -1;
    while (temp >= 10)
    {
        temp /= 10;
        ilosc_cyfr++;
    }
    cout << "Ilosc cyfr liczby " << liczba << " wynosi " << ilosc_cyfr << endl;

    ////////////////////////////////////
    //petla for
    ////////////////////////////////////
    int sum = 0, i, N, signN = 1;
    cout << "Podaj N to podam sume od 0 do N: ";
    cin  >> N;
    temp = N;
    if (temp<0) {
        temp *= -1;
        signN = -1;
    }
    /*for (i = 1; i <= temp; i++)
    {
     sum += i;
    }*/
    // instead of loop: sum = temp * (temp+1) / 2
    sum = temp *(temp+1) / 2;
    sum *= signN;
    cout << "Suma liczb od 1 do " << N << " wynosi " << sum << endl;

    while (kbhit() == true) //wyczyszczenie bufora klawiatury
    {
        getch();
    }
    int kzn = getch(); //pobranie pojedynczego znaku
    cout << "kzn: " << kzn << endl;

    //system("PAUSE");
    return 0;

}
