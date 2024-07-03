#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;

void sumaParImpar(const vector<int> &vec, int &sumaPar, int &sumaImpar) {
    sumaPar = 0;
    sumaImpar = 0;
    for (size_t i = 0; i < vec.size(); i++) {
        if (i % 2 == 0) {
            sumaPar += vec[i];
        } else {
            sumaImpar += vec[i];
        }
    }
}

int main() {
	SetConsoleOutputCP(CP_UTF8);
    int n;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Ingrese los elementos del vector:" << endl;
    for (int &num : vec) {
        cin >> num;
    }
    int sumaPar, sumaImpar;
    sumaParImpar(vec, sumaPar, sumaImpar);
    cout << "Suma de elementos en posiciones pares: " << sumaPar << endl;
    cout << "Suma de elementos en posiciones impares: " << sumaImpar << endl;
    return 0;
}
