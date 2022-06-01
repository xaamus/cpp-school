#include <iostream>
using namespace std;
int i;
struct datao{
	int dzien[5];
	int mies[5];
	int rok[5];
};
struct kwiaty{
	char rodzaj[5];
	char nazwa[5];
};
void susIn(){
	cout << "Kwiaty: rodzaj, nazwa, data" << endl;
	for (i=0;i<5;i++){
		cin >> kwiaty.rodzaj[i];
		cin >> kwiaty.nazwa[i];
		cin >> datao.dzien[i];
		cin >> datao.mies[i];
		cin >> datao.rok[i];
	}
}
void susOut(){
	cout << "Kwiaty: rodzaj, nazwa, data" << endl;
	for (i=0;i<5;i++){
		cout << kwiaty.rodzaj[i] << endl;
		cout << kwiaty.nazwa[i] << endl;
		cout << datao.dzien[i] << "." << datao.mies[i] << "." << datao.rok[i] << endl;
	}
}
int main(){
	susIn();
	susOut();
	return 0;
}
