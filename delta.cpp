#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c, x1, x2;
    cout << "Podaj a" << endl;
    cin >> a;
    cout << "Podaj b" << endl;
    cin >> b;
    cout << "Podaj c" << endl;
    cin >> c;
    float d = b * b - 4 * a * c;
    float x0 = -b / 2 * a;
    if (d == 0) {
        cout << x0 << endl;
    }
    else if (d != 0) {
        if (d > 0) {
            cout << x1 << "," << x2 << endl;
        }
        else if (d !> 0) {
            cout << "Brak pierwiastka kwadratowego" << endl;
        }
    }
    return 0;
}