#include <iostream>
#include <string>
using namespace std;
string wynik,tekst,torn;
int klucz,i,maks,wybor;

void zaszyfrowanie(){
    cout <<"Podaj tekst do szyfrowania:" << endl;
    cin >> tekst;
    cout <<"Podaj przesuniecie:" << endl;
    cin >> klucz;
    maks=tekst.size();
    wynik.resize(maks);
    for (i=0; i<maks; i++){
        wynik[i]=(tekst[i]+klucz)%256;
    }
    cout << "Tekst zaszyfrowany: "<< wynik << endl; 
}

void odszyfrowanie(){
    cout << "Podaj tekst do odszyfrowania:" << endl;
    cin >> tekst;
    cout << "Podaj przesuniecie:" << endl;
    cin >> klucz;
    maks=tekst.size();
    wynik.resize(maks);
    for (i=0; i<maks; i++){
        wynik[i]=(tekst[i]-klucz)%256; 
    }
    cout << "Tekst odszyfrowany: " << wynik << endl;
}

int main(){
    do{
        cout << "\n1. Zaszyfrowanie" << endl;
        cout << "2. Odszyfrowanie" << endl;
        cin >> wybor;
        switch(wybor){
            case 1:
                zaszyfrowanie();
                break;
            case 2:
                odszyfrowanie();
                break;
        }
        cout << "\nCzy chcesz powtorzyc?" << endl;
        cout << "tak / nie" << endl;
        cin >> torn;
    }while(torn=="tak");
}
