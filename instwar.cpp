#include <iostream>
using namespace std;
int main()
{
	float x,y, z;
	cout << "Podaj x:" << endl;
	cin >> x;
	cout << "Podaj y:" << endl;
	cin >> y;
	z=x/y;
	if(y !=0){
	cout << "Dzielenie = " << z << endl;
	} else {
	cout << "Nie dzielimy przez 0!" << endl;
	}
	return 0;
}