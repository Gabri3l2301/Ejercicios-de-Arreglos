#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
    int n;
    cout << "Ingrese la cantidad de números: ";
    cin >> n;
    vector<int> numeros(n);
    cout << "Ingrese los números:" << endl;
    for (int &num : numeros) {
        cin >> num;
    }
    int sumaPositivos = 0, sumaNegativos = 0;
    for (int num : numeros) {
        if (num > 0) {
            sumaPositivos += num;
        } else {
            sumaNegativos += num;
        }
    }
    cout << "Suma de positivos: " << sumaPositivos << endl;
    cout << "Suma de negativos: " << sumaNegativos << endl;
    return 0;
}