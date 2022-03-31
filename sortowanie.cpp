#include <iostream>
using namespace std;
int i,j,n,losfr,losto,losco,searchel,sortord,todo;
string torn;
int tab[100];
void losowanieelementu(){
    cout << "Podaj zakres losowania i ile elementow" << endl;
    cin >> losfr;
    cin >> losto;
    cin >> losco;
    for (i=0;i<losco;i++){
        tab[i]=(rand()%(losto-losfr)+losfr);
    }
}
void szukanieelementu(){
    cout << "Podaj szukany element" << endl;
    cin >> searchel;
    for (i=0;i<losco;i++){
        if (searchel==tab[i]){
            cout << "Element znajduje sie na " << i << "miejscu w tabeli" << endl;
        }
    }
}
void sortowanie(){
    cout << "Sortowanie rosnace czy malejace?" << endl;
    cin >> sortord;
    n=losco;
    switch(sortord){
        case 1:
            for(i=0;i<n;i++){
		        for(j=1;j<n-i;j++){
		            if(tab[j-1]>tab[j]){
			            swap(tab[j-1], tab[j]);
		            }
		        }
            }
            break;
        case 2:
            for(i=0;i<n;i++){
		        for(j=1;j<n-i;j++){
		            if(tab[j-1]<tab[j]){
			            swap(tab[j-1], tab[j]);
		            }
		        }
            }
            break;
    }
    for (i=0;i<losco;i++){
        cout << tab[i] << endl;
    }
}
int main()
{
    do
    {
        cout << "Co chcesz zrobić?" << endl;
        cout << "1. Losowanie" << endl;
        cout << "2. Szukanie" << endl;
        cout << "3. Sortowanie" << endl;
        cin >> todo;
        switch(todo){
            case 1:
                losowanieelementu();
                break;
            case 2:
                szukanieelementu();
                break;
            case 3:
                sortowanie();
                break;
        }
        cout << "Czy chcesz wrocic do menu?" << endl;
        cin >> torn;
    }
    while (torn=="tak");
    return 0;
}