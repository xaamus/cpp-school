#include <iostream>
#include <math.h>
using namespace std;
int wybor,x,alfa;
int main(){
        cout << "1. Dzialanie" << endl;
        cout << "2. Trygonometria" << endl;
        cin >> wybor;
        switch(wybor){
            case 1:
            cout << "Podaj x ";
            cin >> x;
            cout << sqrt(x*x*x) << endl;
            break;
            case 2:
            cout << "Podaj alfe ";
            cin >> alfa;
            cout << "sin: " << sin(alfa) << endl;
            cout << "cos: " << cos(alfa) << endl;
            cout << "tg: " << tan(alfa) << endl;
            cout << "ctg: " << atan(alfa) << endl;
            break;
        }
    return 0;
}