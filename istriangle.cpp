#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Na podstawie katow sprawdzimy czy ten trojkat istnieje" << endl;
	cout << "Podaj kat a: ";
	cin >> a;
	cout << "Podaj kat b: ";
	cin >> b;
	cout << "Podaj kat c: ";
	cin >> c;
	if (a == 0 || b == 0 || c == 0) {
		cout << "Wprowadz poprawne dane";
	}
	else if (a + b + c != 180) {
		cout << "Ten trojkat nie istnieje";
	}
	else {
		cout << "Ten trojkat istnieje";
	}
	return 0;
}