#include <iostream>
using namespace std;
char znak;
int a,b,i,j;
int main(){
    cin >> znak;
    cin >> a;
    cin >> b;
    for (i=0;i<b;i++){
        for (j=0;j<a;j++){
            cout << znak;
        }
    cout << "\n";
    }
    return 0;
}