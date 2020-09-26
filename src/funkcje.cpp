#include <iostream>
using namespace std;

float dzielenie(float a, float b)
{
    if (b!=0) return a/b;
    else
    cout << "Dzielenie przez zero niemożliwe";
}