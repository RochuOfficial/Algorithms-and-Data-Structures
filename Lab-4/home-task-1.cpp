// Mateusz Rochowski, 258669
// ---------- IMPORT LIBRARIES ----------
#include <cstdlib>
#include <iostream>

// ---------- DEFINE CONSTANTS ----------
#define SUCCES 0
#define FAILURE 1

using namespace std;

// ---------- MAIN ----------
int main(int argc, char *argv[]){

    int number;

    do{
        cout << "Liczbe a ja wyswietle jej wspolczynnyki: ";
        cin >> number;
        if(number < 0) cout << "Podaj liczbe dodatnia!" << endl;
    } while(number < 0);

    cout << "Cyfry liczby to: ";
    while(number > 0){
        cout << number % 10 << " | ";
        number /= 10;
    }

    cout << endl << endl;
    system("PAUSE");
    return SUCCES;
}
