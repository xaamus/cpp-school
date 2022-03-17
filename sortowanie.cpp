//NIE DZIALA

#include <iostream>
using namespace std;
int n,j,i,op,sz;
string wyb;
int tab[0];
void tablica(){
    cout << "Ile elementow tablicy?" << endl;
    cin >> n;
    tab[n];
    for (i=0;i<n;i++){
        cin >> tab[i];
    }
}
void szukanie(){
    cout << "Podaj szukany element: " << endl;
    cin >> sz;
    for (i=0;i<n;i++){
        if (tab[i]=i){
            cout << "Znaleziono element";
        }
        else{
            cout << "Nie znaleziono elementu";
        }
    }
}
void sortowaniemal(){
    for(i=0;i<n;i++){
		for(j=1;j<n-i;j++){
		    if(tab[j-1]<tab[j]){
			    swap(tab[j-1],tab[j]);
		    }
		}
    }	
}
void sortowanieros(){
    for(i=0;i<n;i++){
		for(j=1;j<n-i;j++){
		    if(tab[j-1]>tab[j]){
			    swap(tab[j-1],tab[j]);
		    }
		}
    }
}
void wyswietl(){
    for (i=0;i<n;i++){
        cout << tab[i] << endl;
    }
}
int main()
{
    do{
        cout << "Co chcesz zrobic?" << endl;
        cout << "1. Tworzenie tablicy" << endl;
        cout << "2. Szukanie elementu" << endl;
        cout << "3. Sortowanie malejaco" << endl;
        cout << "4. Sortowanie rosnaco" << endl;
        cin >> op;
        switch(op){
            case 1:
                tablica();
                break;
            case 2:
                szukanie();
                break;
            case 3:
                wyswietl();
                sortowaniemal();
                break;
            case 4:
                wyswietl();
                sortowanieros();
                break;
        }
        cout << "Powrot do menu" << endl;
        cout << "tak / nie" << endl;
        cin >> wyb;    
    }
    while(wyb=="tak");
    return 0;
}
