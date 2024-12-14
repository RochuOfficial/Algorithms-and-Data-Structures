#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    double a, b, c, delta, x1, x2;

    cout << "Rownanie ax^2 + bx + c = 0" << endl;
    cout << "a = ";
    cin  >>  a;
    cout << "b = ";
    cin  >>  b;
    cout << "c = ";
    cin  >>  c;

    if(a == 0.0){
        if (b != 0.0){
            x1 = -c/b;
            cout << "Rownanie jest liniowe i ma 1 rozwiazanie rowne: " << x1 << endl;
        }
        else if (c == 0.0){
            cout << "Rownanie jest liniowe i ma nieskonczenie wiele rozwiazan!" << endl;
        }
        else{
            cout << "Rownanie jest liniowe i nie ma rozwiazan!" << endl;
        }

        system("pause");
        return 0;
    }

    delta = b * b - 4 * a * c;

    if (delta < 0.0) cout << "Rownanie nie ma pierwiasrkow!" << endl;
    else if (delta == 0){
        x1 = -b/(2*a);
        cout << "Rownanie ma 1 pierwiastek rowny: " << x1 << endl;
    }
    else if (delta > 0.0){
        double pDelta = sqrt(delta);
        x1 = (-b+pDelta)/(2*a);
        x2 = (-b-pDelta)/(2*a);
        cout << "Rownanie ma 2 pierwiastki rowne:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else {
        cout << "Nie powinno mnie tu byc!" << endl;
    }

    system("pause");
    return 0;
}
