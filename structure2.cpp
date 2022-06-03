#include <iostream>
using namespace std;
int i, dzien[5], mies[5], rok[5];
string gatunek[5], imie[5], uwagi[5];
struct urzwierz{
	int dzien;
	int mies;
	int rok;
}dataur;
struct zoo{
	string gatunek;
	string imie;
	string uwagi;
}zwierze;
void susIn(){
	cout << "Zoo " << i+1 << ": gatunek, imie, dzien, miesiac, rok, uwagi" << endl;
	cin >> zwierze.gatunek;
	cin >> zwierze.imie;
	cin >> dataur.dzien;
	cin >> dataur.mies;
	cin >> dataur.rok;
	cin >> zwierze.uwagi;
}
void susOut(){
	cout << "Zoo " << i+1 << ": gatunek, imie, dzien, miesiac, rok, uwagi" << endl;
	cout << zwierze.gatunek << endl;
	cout << zwierze.imie << endl;
	cout << dataur.dzien << "." << dataur.mies << "." << dataur.rok << endl;
	cout << zwierze.uwagi << endl;
}
int main(){
	susIn();
	susOut();
	return 0;
}
