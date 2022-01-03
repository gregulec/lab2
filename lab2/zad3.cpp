#include<iostream>
using namespace std;
int a, b;

int main() {
	cout << "Podaj zmienna a" << endl;
	cin >> a;
	cout << "Podaj zmienna b" << endl;
	cin >> b;
	cout << "Dodawanie " << a + b << endl;
	cout << "Odejmownie " << a - b << endl;
	cout << "Mnozenie " << a*b << endl;
	cout << "Dzielenie " << a / b << endl;
	cout << "Dzielenie z rzutowaniem " << (float)a / (float)b << endl;
}