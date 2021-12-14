#include <iostream>
using namespace std;
int ile,menu,a,b,c,ret,inmenu;
int main(){
    cin >> ile;
    while (ile<10){
        cout << "----" << endl;
        cout << "Podałes " << ile << endl;
        ++ile;
    }
    cout << "1. Funkcje\n2. Zaokraglenia\n3. Autor" << endl;
    cin >> menu;
    switch(menu){
        case 1:
        cout << "1. Potega\n2. Pierwiastek\n3. Max\n4. Min" << endl;
        cin >> inmenu;
        switch(inmenu){
            case 1:
            cout << "Podaj a i b" << endl;
            cin >> a;
            cin >> b;
            cout << pow(a,2) << endl;
            cout << pow(b,2) << endl;
            break;
            case 2:
            cout << "Podaj a i b" << endl;
            cin >> a;
            cin >> b;
            cout << sqrt(a) << endl;
            cout << sqrt(b) << endl;
            break;
            case 3:
            cout << "Podaj a i b i c" << endl;
            cin >> a;
            cin >> b;
            cin >> c;
            cout << max(a,b,c) << endl;
            break;
            case 4:
            cout << "Podaj a i b i c" << endl;
            cin >> a;
            cin >> b;
            cin >> c;
            cout << min(a,b,c) << endl;
            break;
            default:
            cout << "Nalezalo wybrac 1-4" << endl;
        }
        break;
        case 2:
        cout << "Podaj a i b" << endl;
        cin >> a;
        cin >> b;
        cout << a-b << endl;
        break;
        case 3:
        cout << "Autorem jest Kacper Samus" << endl;
        break;
        default:
        cout << "Nalezalo wybrac 1-3" << endl;
        break;
    }
    cout << endl;
    cout << "Czy chcesz powtorzyc?" << endl;
    cout << "1. Tak\n2. Nie" << endl;
    cin >> ret;
    return 0;
}