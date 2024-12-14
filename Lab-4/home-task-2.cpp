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
        cout << "Podaj liczbe a ja wyswietle jej dzielniki: ";
        cin >> number;
        if(number < 0) cout << "Liczba musi byc dodatnia!" << endl;
    } while(number < 0);

    int intArray[10] = {0};
    int counter = 0, divisor = 2;

    while(number > 1){
        while (number % divisor == 0){
            intArray[counter] = divisor;
            counter++;
            number /= divisor;
        }
        divisor++;
    }

    for (int i = 0; i < sizeof(intArray)/sizeof(int); i++){
        cout << intArray[i] << " | ";
    }

    // Home Task 3:

    int product;

    for (int i = 0; sizeof(intArray)/sizeof(int); i++){
        product *=  intArray[i];
    }

    cout << "Iloczyn: " << product << endl;

    cout << endl << endl;
    system("PAUSE");
    return SUCCES;
}
