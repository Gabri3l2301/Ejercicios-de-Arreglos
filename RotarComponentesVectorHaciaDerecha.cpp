#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;

void rotarDerecha(vector<int> &vec) {
    if (vec.empty()) return;
    int ultimo = vec.back();
    for (int i = vec.size() - 1; i > 0; i--) {
        vec[i] = vec[i - 1];
    }
    vec[0] = ultimo;
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
    rotarDerecha(vec);
    cout << "Vector rotado una posición a la derecha:" << endl;
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
