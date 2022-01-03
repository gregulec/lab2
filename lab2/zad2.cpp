#include <cmath>;
#include <iostream>;
using namespace std;

const float PI = 3.14;
float a, b, c, gamma, beta, alfa;
double cgamma, calfa, cbeta;

int main(){
	cout << "Podaj dlugosc boku a trojkata" << endl;
	cin >> a;
	cout << "Podaj dlugosc boku b trojkata" << endl;
	cin >> b;
	cout << "Podaj dlugosc boku c trojkata" << endl;
	cin >> c;
	cgamma = (c*c - a*a - b*b) / (-2 * a*b);
	gamma = acos(cgamma)*(180.0 / PI);
	calfa = (a*a - b*b - c*c) / (-2 * b*c);
	alfa = acos(calfa)*(180.0 / PI);
	cbeta = (b*b - a*a - c*c) / (-2 * a*c);
	beta = acos(cbeta)*(180.0 / PI);
	cout << "Gamma " << gamma << endl;
	cout << "Alfa " << alfa << endl;
	cout << "Beta " << beta << endl;
}