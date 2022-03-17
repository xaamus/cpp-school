#include <iostream>
using namespace std;
int main()
{
	int x,y;
	cout << "Podaj x:" << endl;
	cin >> x;
	cout << "Podaj y:" << endl;
	cin >> y;
	if(x==y){
	cout << "liczby sa rowne" << endl;
	}else if(x>y){
	cout << "x jest wieksze" << endl;
	}else{
	cout << "y jest wieksze" << endl;
	}
	return 0;
}
