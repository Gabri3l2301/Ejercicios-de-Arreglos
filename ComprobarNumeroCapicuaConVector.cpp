#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
using namespace std;

bool esCapicua(const vector<int> &vec) {
    int n = vec.size();
    for (int i = 0; i < n / 2; i++) {
        if (vec[i] != vec[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
	SetConsoleOutputCP(CP_UTF8);
    string numero;
    cout << "Ingrese un número de 10 cifras:" << endl;
    cin >> numero;

    if (numero.length() != 10) {
        cout << "El número debe tener exactamente 10 cifras." << endl;
        return 1;
    }

    vector<int> vec(10);
    for (int i = 0; i < 10; i++) {
        vec[i] = numero[i] - '0'; 
    }

    if (esCapicua(vec)) {
        cout << "El número es capicúa." << endl;
    } else {
        cout << "El número no es capicúa." << endl;
    }
    return 0;
}
