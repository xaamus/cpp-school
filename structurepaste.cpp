#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct ur_zwierza{
	string dzien;
	string miesiac;
	string rok;
	void set_ur_zwierza(string nowy_dzien, string nowy_miesiac, string nowy_rok) {
		dzien=nowy_dzien;
		miesiac=nowy_miesiac;
		rok=nowy_rok;
	}
};
struct zoo{
	string gatunek;
	string imie;
	string data;
	string uwagi;
	void set_zoo (string nowy_gatunek, string nowa_imie, string nowa_data, string nowa_uwagi) {
		gatunek=nowy_gatunek;
		imie=nowa_imie;
		data=nowa_data;
		uwagi=nowa_uwagi;
 
	}
};
string gatunek_main;
string dzien_main;
string miesiac_main;
string rok_main;
string imie_main;
string uwagi_main;
int main(){
	ur_zwierza data;
	zoo zwierza;
	cout << "Podaj gatunek" << endl;
	cin >> gatunek_main;
	cout << "Podaj dzień"<< endl;
	cin >> dzien_main;
	cout << "Podaj miesiąc"<< endl;
	cin >> miesiac_main;
	cout << "Podaj rok"<< endl;
	cin >> rok_main;
	cout << "Podaj nazwe"<< endl;
	cin >> imie_main;
    cout << "Podaj uwagi" << endl;
    cin >> uwagi_main;
	data.set_ur_zwierza(dzien_main, miesiac_main, rok_main);
    string pelna_data=data.dzien+" "+data.miesiac+" "+data.rok;
    zwierza.set_zoo(gatunek_main,imie_main,pelna_data,uwagi_main);
	ofstream plik;
	plik.open("dane.txt");
	plik<<zwierza.gatunek;
	plik<<'\n';
	plik<<zwierza.imie;
	plik<<'\n';
	plik<<zwierza.data;
	plik<<'\n';
	plik<<zwierza.uwagi;
	plik<<'\n';
}
