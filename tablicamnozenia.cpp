#include <iostream>
using namespace std;
int tabi[10],tabj[10],i,j,n;
int main()
{
    for (n=0;n<10;n++){
        tabi[n+1]=tabi[n]+1;
        tabj[n+1]=tabj[n]+1;
    }
    for (i=0;i<10;i++){
        for (j=0;j<10;j++){
            cout << tabi[i]*tabj[j] << " ";
        }
        cout << endl;
    }
}