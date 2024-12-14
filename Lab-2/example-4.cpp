#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

    int liczba = 0;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    if (liczba < 0) cout << "Liczba jest mniejsza od 0" << endl;
    else if (liczba >= 0 && liczba <= 10) cout << "Liczba jest z zakresu od 0 do 10" << endl;
    else cout << "Liczba jest wieksza od 10" << endl;

    return 0;
}
