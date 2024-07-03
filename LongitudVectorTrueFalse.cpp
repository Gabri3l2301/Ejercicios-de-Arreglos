#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;

bool estaOrdenado(const vector<int>& vec) {
    for(size_t i = 1; i < vec.size(); ++i) {
        if(vec[i] < vec[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
	SetConsoleOutputCP(CP_UTF8);
    int n;
    cout << "Ingrese la cantidad de elementos del vector: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Ingrese los elementos del vector:" << endl;
    for (int &num : vec) {
        cin >> num;
    }
    bool ordenado = estaOrdenado(vec); 
    if (ordenado) {
        cout << "El vector está ordenado." << endl;
    } else {
        cout << "El vector no está ordenado." << endl;
    }
    return 0;
}