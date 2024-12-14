#include <cstdlib>
#include <iostream>
#include <conio.h>

#define M 24
#define N 18

using namespace std;

int main(int argc, char *argv[])
{
 char tab[M][N]; // M - rows, N - columns
 int  i, j;
 /*
   wstawienie spacji
   do kazdego z elementow
   tablicy
 */
 for (i = 0; i < M; i++) // i refers to rows
 {
  for (j = 0; j <= N; j++) // j refers to columns
  {
   tab[i][j] = ' ';
  }
 }
 /*
   utworzenie wzoru
   gwiazdek w tablicy
 */
 for (i = 0; i < M; i++)
 {
  for (j = 0; j <= i; j++)
  {
   tab[i][j] = '*';
  }
 }
 //wyswietlenie tablicy
 for (i = 0; i < M; i++)
 {
  for (j = 0; j < N; j++)
  {
   cout << tab[i][j];
  }
  cout << endl;
 }

 // transposition

 char tabTransposition[N][M]; // N - rows, M - columns
 for (j = 0; j < N; j++) // j - rows
 {
  for (i = 0; i < M; i++) // i - columns
  {
    tabTransposition[j][i] = tab[i][j];
  }
 }

 for (j = 0; j < M; j++)
 {
  for (i = 0; i < N; i++)
  {
   cout << tabTransposition[j][i];
  }
  cout << endl;
 }

 // Exercise 3: Search lowest number in column
  double minValues[5];
  double array1[3][5] = {
    {1, 2, -3, 4, -5},
    {6, 7, -8, 9, 10},
    {-11, 12, 13, 14, 15}
 };

 for (i = 0; i < 3; i++){
    for (j = 0; j < 5; j++){
        minValues[j] = array1[0][j];
        if (array1[i][j] < minValues[j])
            minValues[j] = array1[i][j];
    }
 }

 cout << endl << "Najmniejsze wartosci kolumn:" << endl;
 for (i = 0; i < 5; i++){
    cout << minValues[i] << ' ';
 }

 // Exercise 4: transposition and display
 double doubleArray[3][5] = {
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 10},
    {11, 12, 13, 14, 15}
 };
 int row = 3, column = 5;
 double transposedArray[5][3] = {0.0};

 for (i = 0; i < 5; i++){ // i - rows in transposed array
    for (j = 0; j < 3; j++){ // j - columns in transposed array
        transposedArray[i][j] = doubleArray[j][i];
    }
 }

 // display new array
 cout << endl << endl << "Nowa macierz: {" << endl;
 for (i = 0; i < 5; i++){ // i - rows in transposed array
    for (j = 0; j < 3; j++){ // j - columns in transposed array
        cout << transposedArray[i][j] << ' ';
    }
    cout << endl;
 }
 cout << "}" << endl;

 getch();
 return 0;
}
