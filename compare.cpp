#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "Wczytaj x: " << endl;
	cin >> x;
	if(x==0){
	cout << "x jest rowne 0" << endl;
	}else if(x>0){
	cout << "x jest dodatnie" << endl;
	}else{
	cout << "x jest ujemne" << endl;
	}
}
