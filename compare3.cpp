#include <iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout << "Podaj x:" << endl;
	cin >> x;
	cout << "Podaj y:" << endl;
	cin >> y;
	cout << "Podaj z:" << endl;
	cin >> z;
	if(x==y&&x==z){
	cout << "liczby sa rowne" << endl;
	}else if(x>y&&x>z){
	cout << "x jest najwieksze" << endl;
	}else if(x>y&&x==z){
	cout << "x i z sa najwieksze" << endl;
	}else if(x>z&&x==y){
	cout << "x i y sa najwieksze" << endl;
	}else if(y>x&&y>z){
	cout << "y jest najwieksze" << endl;
	}else if(y>x&&y==z){
	cout << "y i z sa najwieksze" << endl;
	}else if(y>z&&y==x){
	cout << "y i x sa najwieksze" << endl;
	}else if(z>x&&z>y){
	cout << "z jest najwieksze" << endl;
	}else if(z>y&&z==x){
	cout << "z i x sa najwieksze" << endl;
	}else if(z>x&&z==y){
	cout << "z i y sa najwieksze" << endl;
	}
	return 0;
}
