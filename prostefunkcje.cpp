#include <iostream>
using namespace std;
string im,na,nr;
double x,y;
int wyb;
string res;
int n,a,r;
string wizytowka(string im, string nr, string na){
    cout << im << ' ' << na << endl;
    cout << nr << endl;
}
double srednia(double x, double y){
    cout << (x+y)/2 << endl;
}
float figura(int n, int a, int r){
    cout << n/2*a*r << endl;
}
int main()
{
    do{
        cin >> wyb;
        switch(wyb){
            case 1:
            cin >> x;
            cin >> y;
            cout << srednia(x,y);
            break;
            case 2:
            cin >> im;
            cin >> nr;
            cin >> na;
            cout << wizytowka(im,na,nr);
            break;
            case 3:
            cin >> n;
            cin >> a;
            cin >> r;
            if (n>0&&a>0&&r>0){
                cout << figura(n,a,r);    
            }
            break;
        }
        cin >> res;
    }
    while (res=="tak");
    return 0;
}