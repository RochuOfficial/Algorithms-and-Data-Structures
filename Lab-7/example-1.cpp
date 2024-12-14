// Mateusz Rochowski, 258669
// ---------- IMPORT LIBRARIES ----------
#include <cstdlib>
#include <iostream>

// ---------- DEFINE CONSTANTS ----------
#define ARRAY_SIZE 100

// ---------- DEFINE FUNCTIONS ----------
int lowerCase(char*);

using namespace std;

// ---------- MAIN ----------
int main(int argc, char *argv[]){

 char stringArray[ARRAY_SIZE];
 int lowerCaseNumber;

 cout << "Podaj jakies zdanie:" << endl;
 cin.getline(stringArray, ARRAY_SIZE);

 lowerCaseNumber = lowerCase(stringArray);

 cout << "Liczba malych znakow to: " <<  lowerCaseNumber << endl;

 cout << endl << endl;
 system("PAUSE");
 return 0;
}

// ---------- FUNCTIONS ----------
int lowerCase(char *givenArray){
 int counter = 0, i = 0;

 while(givenArray[i]){
  if (givenArray[i] >= 'a' && givenArray[i] <= 'z'){
   counter++;
  }
  i++;
 }

 return counter;
}

