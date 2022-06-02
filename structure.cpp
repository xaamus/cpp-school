#include <iostream>
using namespace std;
int i;
struct datastr{
	int dzien;
	int mies;
	int rok;
}datek;
struct kwiat{
	char rodzaj[10];
	char nazwa[10];
}kwiatek;
void susIn(){
	cout << "Kwiaty: rodzaj, nazwa, data" << endl;
	cin >> kwiatek.rodzaj;
	cin >> kwiatek.nazwa;
	cin >> datek.dzien;
	cin >> datek.mies;
	cin >> datek.rok;
}
void susOut(){
	cout << "Kwiaty: rodzaj, nazwa, data" << endl;
	cout << kwiatek.rodzaj << endl;
	cout << kwiatek.nazwa << endl;
	cout << datek.dzien << "." << datek.mies << "." << datek.rok << endl;
}
int main(){
	susIn();
	susOut();
	return 0;
}
