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
    double doubleArray[10] =
    {
        3.14,  2,  27.61, -8.32, -17.678,
        -3.14, -2, -7.61,  8.32,  17.678,
    };
    int arrayLenght = sizeof(doubleArray)/sizeof(double);

    double maxValue = doubleArray[0];
    int index;

    for (int i = 1; i < arrayLenght; i++){
        if(maxValue < doubleArray[i]){
            maxValue = doubleArray[i];
            index = i;
        }
    }

    cout << "Wartosc najwieksza: " << maxValue << endl;
    cout << "Indeks: " << index << endl;


    double minValue = doubleArray[0];
    int indexMin;

    for (int i = 1; i < arrayLenght; i++){
        if(minValue > doubleArray[i]){
            minValue = doubleArray[i];
            indexMin = i;
        }
    }

    cout << "Wartosc najmniejsza: " << minValue << endl;
    cout << "Indeks: " << indexMin << endl;



    return SUCCES;
}
