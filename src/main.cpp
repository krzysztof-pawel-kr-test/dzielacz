#include <iostream>
#include "../inc/funkcje.h"
using namespace std;

float licznik, mianownik;

int main(void)
{
    cout << "Podaj licznik" << endl;
    cin >> licznik;
    cout << "Podaj mianownik" << endl;
    cin >> mianownik;

    cout << "Wynik wynosi: " << dzielenie(licznik, mianownik);
    cout << "Mam nadzieje ze Cie to zadowala";
}
