// laboratorium4_PP.cpp :

//ZADANIE 1 - dodac opcje dla a i b rownych
/* #include <iostream>
using namespace std;
int wieksza(int a, int b);
int main() {
	int a, b, c;
	cout << "Podaj liczbe a: ";
	cin >> a;
	cout << endl << "Podaj liczbe b: ";
	cin >> b;
	c = wieksza(a, b);
	cout << endl << "Liczba wieksza to: " << c << endl;
	return 0;
}

int wieksza(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
*/

//ZADANIE 2 - do skonczenia
/* #include <iostream>
using namespace std;
int dzielnik(int n);
int main() {
	int n;
	int x[];
	cout << "Podaj liczbe dodatnia n: ";
	cin >> n;

	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0) {
			x[i] = i;
		}
		cout << endl << "Dzielniki liczby " << n << " to: " << x;
	}
}
*/

/* int dzielnik(int n) {
	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0) {
			return i;
		}
	}
}
*/
	
//ZADANIE 3
/* #include <iostream>
using namespace std;
float wynik(float a, float b, float c, char dzialanie);
int main() {
	float a, b, c = 0.0;
	int i = 0;
	string x;
	char dzialanie;

	while (1) {
		if (i > 0) {
			cout << endl << "Czy zakonczyc swoje dzialanie? ";
			cin >> x;
			if (x == "tak") {
				return 0;
			}
			else if (x == "nie") {
				i = 0;
				continue;
			}
			else {
				cout << "Podano zla odpowiedz. Przerywam petle. " << endl;
				return 0;
			}
		}
		i++;

		cout << endl << "Podaj wartosc liczby zmiennoprzecinkowej a: ";
		cin >> a;
		cout << endl << "Podaj znak dzialania: ";
		cin >> dzialanie;
		cout << endl << "Podaj wartosc liczby zmiennoprzecinkowej b: ";
		cin >> b;
		cout << endl << "Wynik: " << wynik(a, b, c, dzialanie) << endl;
	}
}

float wynik(float a, float b, float c, char dzialanie) {
if (dzialanie == '+') {
	c = a + b;
}
else if (dzialanie == '-') {
	c = a - b;
}
else if (dzialanie == '*') {
	c = a * b;
}
else if (dzialanie == '/') {
	if (b == 0) {
		cout << endl << "Nie mozna dzielic przez 0!" << endl;
		return 1;
	}
	c = a / b;
}
else {
	cout << endl << "Niepoprawne dzialanie. ";
	return 1;
}
return c;
}
*/

//ZADANIE 4
/* #include <iostream>
using namespace std;
int potega(int a, int b);
int main() {
	int a, b;
	cout << "Podaj liczbe a: ";
	cin >> a;
	cout << endl << "Podaj liczbe b: ";
	cin >> b;

	cout << endl << a << " do potegi " << b << " wynosi: " << potega(a, b) << endl;

}

int potega(int a, int b) {
	int c = 1;
	for (int i = 1; i <= b; i++) {
		c = c * a;
	}
	return c;
}
*/

//ZADANIE 5
#include <iostream>
using namespace std;