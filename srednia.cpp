#include <iostream>
using namespace std;

int main()
{
int ocena1, ocena2, ocena3, waga1, waga2, waga3;
cout << "Wprowadz pierwsza ocene:  ";
cin >> ocena1;
cout << "Wprowadz druga ocene:  ";
cin >> ocena2;
cout << "Wprowadz trzecia ocene:  ";
cin >> ocena3;
cout << "Wprowadz wage pierwszej oceny:  ";
cin >> waga1;
cout << "Wprowadz wage drugiej oceny:  ";
cin >> waga2;
cout << "Wprowadz wage trzeciej oceny:  ";
cin >> waga3;
if (ocena1==0 || ocena2==0 || ocena3==0){
	cout << "Idz popraw oceny" << endl;
}
if (ocena1>6 || ocena1<0 || ocena2>6 || ocena2<0 || ocena3>6 || ocena3<0){
	cout << "Wprowadz poprawne oceny" << endl;
}
if (waga1>3 || waga1<1 || waga2>3 || waga2<1 || waga3>3 || waga3<1){
	cout << "Wprowadz poprawne wagi" << endl;
}
float sredniaw = (waga1+waga2+waga3)/3;
float sredniao = (ocena1*waga1+ocena2*waga2+ocena3*waga3);
if (ocena1<6 && ocena1>0 && ocena2<6 && ocena2>0 && ocena3<6 && ocena3>0){
float srednia = sredniao/sredniaw/3;
cout << "Srednia ocen wynosi:  " << srednia << endl;
}
return 0;	
}
