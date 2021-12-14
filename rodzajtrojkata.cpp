#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    string bck;
    cout << "Boki czy katy?" << endl;
    cin >> bck;
    if (bck=="boki"){
        cout << "Podaj bok a  ";
        cin >> a;
        cout << "Podaj bok b  ";
        cin >> b;
        cout << "Podaj bok c  ";
        cin >> c;
        if (a+b>c && a+c>b && b+c>a){
            if (a==b && b==c){
                cout << "trojkat rownoboczny" << endl;
            }
            else if (a==b && a!=c || a==c && a!=b || b==c && b!=a){
                cout << "trojkat rownoramienny" << endl;
            }
            else if (a!=b && a!=c && b!=c){
                cout << "trojkat roznoboczny" << endl;
            }
            else{
                cout << "wyjdz" << endl;
            }
        }
        else{
            cout << "wyjdz" << endl;
        }
    }
    else if (bck=="katy"){
        cout << "Podaj kat a  ";
        cin >> a;
        cout << "Podaj kat b  ";
        cin >> b;
        cout << "Podaj kat c  ";
        cin >> c;
        if (a+b+c==180 && a>0 && b>0 && c>0){
            if (a>90 || b>90 || c>90){
                cout << "trojkat rozwartokaty" << endl;
            }
            else if (a==90 || b==90 || c==90){
                cout << "trojkat prostokatny" << endl;
            }
            else{
                cout << "trojkat ostrokatny" << endl;
            }
        }
        else{
            cout << "wyjdz" << endl;
        }
    }
    else{
        cout << "wyjdz" << endl;
    }
    return 0;
}