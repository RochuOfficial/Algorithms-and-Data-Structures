#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    // char tekst[] = "Eksperymentalna tablica znakowa 1 2 3";
    char roznica = 'a' - 'A';
    string txt;

    cout << "-------------------------------------" << endl;
    cout << "Podaj tekst do zamiany na wielkie znaki:" << endl;

    getline(cin, txt); // inputs any character
    cout << "Podany tekst:" << endl << txt << endl;

    // calculate the amout of characters
    // for each:
    int txtLenght = 0;
    for(char ch : txt){
        txtLenght++;
    } // we know the lenght of string -> declare array of the given lenght
    cout << "Rozmiar tablicy: " << txtLenght << endl;

    char tekst[txtLenght]; // do we need to initialize ? {0}
    int index = 0;

    for(char ch : txt){
        tekst[index] = ch; // no need for initialization, override
        index++;
    }

    cout << tekst << endl;

    int tekstLenght = sizeof(tekst)/sizeof(char);
    int i;
    cout << "-------------------------------------" << endl;
    cout << tekst << endl;
    //for (i = 0; i < strlen(tekst); i++)
    for (i = 0; i < tekstLenght; i++)
    {
        if (tekst[i] >= 'a' && tekst[i] <= 'z')
        {
            tekst[i] = tekst[i] - roznica;
        }
    }
    cout << "-------------------------------------" << endl;
    cout << tekst << endl;
    getch();

    return 0;
}
