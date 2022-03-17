#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "Podaj a:" << endl;
	cin >> a;
	cout << "Podaj b:" << endl;
	cin >> b;
	if(a>0&&b>0){
	cout << "Pole kwadratu: " << a*a << endl;
	cout << "Obwod kwadratu: " << a*4 << endl;
	cout << "Pole prostokata: " << a*b << endl;
	cout << "Obwod prostokata: " << a*2+b*2 << endl;
	}
	else{
		cout << "Dane sa niepoprawne" << endl;
	}
	return 0;
}
