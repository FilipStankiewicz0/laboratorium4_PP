// laboratorium4_PP.cpp :

//ZADANIE 1
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
	if (a == b) {
		cout << endl << "Liczby sa rowne. " << endl;
	}
	else {
		cout << endl << "Liczba wieksza to: " << c << endl;
	}
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

//ZADANIE 2
/* #include <iostream>
using namespace std;
void dzielnik(int n);
int main() {
	int n;
	cout << "Podaj liczbe dodatnia n: ";
	cin >> n;

		cout << endl << "Dzielniki liczby " << n << " to: ";
		dzielnik(n);
}

void dzielnik(int n) {
	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0) {
			cout << i << " ";
		}		
	}
	cout << n;
}
*/
	
//ZADANIE 3
/* #include <iostream>
#include <cmath> //Przy dzieleniu przez 0 / innym niepoprawnym dzialniu 
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

		if (!isnan(wynik(a, b, c, dzialanie))) { // w przypadku dzielenia przez 0 / niepoprawnego dziania program nie wyswietli wyniku
			cout << endl << "Wynik: " << wynik(a, b, c, dzialanie) << endl;
		}
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
			return NAN;
		}
		c = a / b;
	}
	else {
		cout << endl << "Niepoprawne dzialanie. ";
		return NAN;
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
/* #include <iostream>
using namespace std;
int silnia(int n, int x);
int main() {
	int n, x=1;
	cout << "Podaj liczbe n: ";
	cin >> n;
	
	cout << endl << "Silnia " << n << " to: " << silnia(n, x);
}

int silnia(int n, int x) {
	for (int i = 1; i <= n; i++) {
		x = x * i;
	}
	return x;
}
*/

//ZADANIE 6.1
/* #include <iostream>
using namespace std;
int potega(int n);
int main() {
	int n;
	cout << "Podaj liczbe n: ";
	cin >> n;

	if (n >= 0) {
		cout << endl << "2 do potegi " << n << " to: " << potega(n);
	}
	else {
		cout << endl << "Podana liczba nie byla naturalna. ";
	}
}

int potega(int n) {
	int x = 1;
	if (n > 0) {
		for (int i = 1; i <= n; i++) {
			x = x * 2;
		}
	}
	return x;
}
*/

//ZADANIE 6.2
/* #include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cout << "Podaj liczbe n: ";
	cin >> n;

	cout << endl << "2 do potegi " << n << " to: " << pow(2, n);
}
*/

//ZADANIE 7
/* #include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void los(int n);
int main() {
	srand(time(NULL));
	int n;
	cout << "Podaj szczesliwy numerek (1-10): ";
	cin >> n;
	if (n >= 1 && n <= 10) {
		los(n);
	}
	else {
		cout << endl << "Podano numerek spoza podanego zakresu. ";
	}
}

void los(int n) {
	int x, licznik = 0;
	cout << endl << "Wylosowane liczby: ";
	for (int i = 1; i <= 10; i++) {
		x = rand() % 10 + 1;
		cout << x << " ";
		if (x == n) {
			licznik++;
		}
	}
	cout << endl << "Twoja liczba zostala wylosowana " << licznik << " razy.";
	cout << endl << "Stanowi to " << (float(licznik) / 10) * 100 << "% wylosowanych liczb." << endl;
}
*/

//ZADANIE 8
/* #include <iostream>
using namespace std;
void parzysta(int n);
void nieparzysta(int n);
int main() {
	for (int n = 1; n <= 100; n++) {
		if (n%2 == 0) {
			parzysta(n);
		}
		else if ((n - 1) % 2 == 0) {
			nieparzysta(n);
		}
	}
}

void parzysta(int n) {
	cout << "Liczba " << n << " jest parzysta. Wynik dzialania: " << n/2 << endl;
}

void nieparzysta(int n) {
	cout << "Liczba " << n << " jest nieparzysta. Wynik dzialania: " << (n-1)/2 << endl;
}
*/