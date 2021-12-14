#include <iostream>
using namespace std;
string wyb;
char odp1,odp2,odp3,odp4,odp5;
int pkt;
void pyt1(){
    cout << "Stolica Polski?" << endl;
    cout << "a) Radom" << endl;
    cout << "b) Krakow" << endl;
    cout << "c) Warszawa" << endl;
    cin >> odp1;
    switch(odp1){
        case 'a':
        cout << "Bledna odpowiedz" << endl;
        break;
        case 'b':
        cout << "Bledna odpowiedz" << endl;
        break;
        case 'c':
        cout << "Poprawna odpowiedz" << endl;
        pkt=pkt+1;
        break;
    }
}
void pyt2(){
    cout << "Sasiad Polski?" << endl;
    cout << "a) Niemcy" << endl;
    cout << "b) Francja" << endl;
    cout << "c) Hiszpania" << endl;
    cin >> odp2;
    switch(odp2){
        case 'a':
        cout << "Poprawna odpowiedz" << endl;
        pkt=pkt+1;
        break;
        case 'b':
        cout << "Bledna odpowiedz" << endl;
        break;
        case 'c':
        cout << "Bledna odpowiedz" << endl;
        break;
    }
}
void pyt3(){
    cout << "Jak mam na imie" << endl;
    cout << "a) Kacper" << endl;
    cout << "b) Karol" << endl;
    cout << "c) Daniel" << endl;
    cin >> odp3;
    switch(odp3){
        case 'a':
        cout << "Poprawna odpowiedz" << endl;
        pkt=pkt+1;
        break;
        case 'b':
        cout << "Bledna odpowiedz" << endl;
        break;
        case 'c':
        cout << "Bledna odpowiedz" << endl;
        break;
    }
}
void pyt4(){
    cout << "2+2" << endl;
    cout << "a) 6" << endl;
    cout << "b) 4" << endl;
    cout << "c) 1" << endl;
    cin >> odp4;
    switch(odp4){
        case 'a':
        cout << "Bledna odpowiedz" << endl;
        break;
        case 'b':
        cout << "Poprawna odpowiedz" << endl;
        pkt=pkt+1;
        break;
        case 'c':
        cout << "Bledna odpowiedz" << endl;
        break;
    }
}
void pyt5(){
    cout << "Ile mam lat?" << endl;
    cout << "a) 15" << endl;
    cout << "b) 16" << endl;
    cout << "c) 17" << endl;
    cin >> odp5;
    switch(odp5){
        case 'a':
        cout << "Poprawna odpowiedz" << endl;
        pkt=pkt+1;
        break;
        case 'b':
        cout << "Bledna odpowiedz" << endl;
        break;
        case 'c':
        cout << "Bledna odpowiedz" << endl;
        break;
    }
}
int main()
{
    do{
        cout << pyt1 << endl;
        cout << pyt2 << endl;
        cout << pyt3 << endl;
        cout << pyt4 << endl;
        cout << pyt5 << endl;
        cout << "Punkty: " << pkt << endl;
        if (pkt==0){
            cout << "Ocena: jedynka" << endl;
        }
        else if (pkt==1){
            cout << "Ocena: dwojka" << endl;
        }
        else if (pkt==2){
            cout << "Ocena: trojka" << endl;
        }
        else if (pkt==3){
            cout << "Ocena: czworka" << endl;
        }
        else if (pkt==4){
            cout << "Ocena: piatka" << endl;
        }
        else if (pkt==5){
            cout << "Ocena: szostka" << endl;
        }
        cout << "Czy chcesz powtorzyc?" << endl;
        cin >> wyb;    
    }
    while(wyb=="tak");
    return 0;
}