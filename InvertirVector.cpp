#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;

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
    cout << "Vector invertido:" << endl;
    for (int i = n - 1; i >= 0; i--) {
        cout << vec[i] << " ";
    }
    cout << endl;
    return 0;
}