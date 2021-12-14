#include <iostream>
using namespace std;
int a;
int b;
int main(){
    cin >> a;
    for(b=1000;b>=100;b=b-2){
    if(b%a==0){
        cout << b << ", ";
    }
    }
    return 0;
}