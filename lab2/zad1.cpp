#include <iostream>;
#include "string";
using namespace std;

string imie, nazwisko, plec;
int wiek, ocena;

int main(){
	cout << "Podaj imie" << endl;
	cin >> imie;
	cout << "Podaj nazwisko" << endl;
	cin >> nazwisko;
	cout << "Podaj wiek" << endl;
	cin >> wiek;
	cout << "Podaj plec" << endl;
	cin >> plec;
	cout << "Podaj ocene z matematyki" << endl;
	cin >> ocena;
	cout << "Imie " << imie << endl;
	cout << "Nazwisko " << nazwisko << endl;
	cout << "Wiek " << wiek << endl;
	cout << "Plec " << plec << endl;
	cout << "Ocena z matematyki " << ocena << endl;
}