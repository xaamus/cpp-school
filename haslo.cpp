#include <iostream>
using namespace std;
string haslo="mojave";
string pass;
int main(){
    cout << "Podaj haslo " << endl;
    cin >> pass;
    while(pass!=haslo){
        cout << "Zle haslo" << endl;
        cout << "Podaj haslo " << endl;
        cin >> pass;
    }
    cout << "Poprawne haslo";
    return 0;
}