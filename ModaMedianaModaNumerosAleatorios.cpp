#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

double calcularMedia(const vector<int> &vec) {
    double suma = 0;
    for (int num : vec) {
        suma += num;
    }
    return suma / vec.size();
}

double calcularMediana(vector<int> vec) {
    sort(vec.begin(), vec.end());
    int n = vec.size();
    if (n % 2 == 0) {
        return (vec[n/2 - 1] + vec[n/2]) / 2.0;
    } else {
        return vec[n/2];
    }
}

int calcularModa(const vector<int> &vec) {
    vector<int> frecuencia(1001, 0);
    for (int num : vec) {
        frecuencia[num]++;
    }
    return max_element(frecuencia.begin(), frecuencia.end()) - frecuencia.begin();
}

int main() {
	SetConsoleOutputCP(CP_UTF8);
    srand(time(0));
    vector<int> vec(30);
    for (int &num : vec) {
        num = 100 + rand() % 901;
    }
    cout << "Números generados:" << endl;
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Media: " << calcularMedia(vec) << endl;
    cout << "Mediana: " << calcularMediana(vec) << endl;
    cout << "Moda: " << calcularModa(vec) << endl;
    return 0;
}
