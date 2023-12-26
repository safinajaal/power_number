#include <iostream>
#include "Functions.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    unsigned b;
    cout << "Введите основание: ";
    cin >> a;
    cout << "Введите степень: ";
    cin >> b;
    cout << power(a, b);
    return 0;
}