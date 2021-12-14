#include <iostream>
using namespace std;
int ile,menu,a,b,ret;
int main(){
    cin >> ile;
    while (ile<10){
        cout << "----" << endl;
        cout << "Podałes " << ile << endl;
        ++ile;
    }
    cout << "1. Dodaj \n 2. Odejmij \n 3. Autor" << endl;
    cin >> menu;
    switch(menu){
        case 1:
        cout << "Podaj a i b" << endl;
        cin >> a;
        cin >> b;
        cout << a+b << endl;
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
    }
    cout << "Czy chcesz powtorzyc?" << endl;
    cout << "1. Tak \n 2. Nie" << endl;
    cin >> ret;
    return 0;
}