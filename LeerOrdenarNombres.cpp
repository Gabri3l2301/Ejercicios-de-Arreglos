#include <iostream>
#include <string>
using namespace std;

void ordenarNombres(string nombres[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nombres[i] > nombres[j]) {
                swap(nombres[i], nombres[j]);
            }
        }
    }
}

int main() {
    string nombres[100];
    string nombre;
    int count = 0;

    while (true) {
        cout << "Ingrese un nombre (o 'fin' para terminar): ";
        getline(cin, nombre);
        if (nombre == "fin") {
            break;
        }
        nombres[count++] = nombre;
    }

    ordenarNombres(nombres, count);

    cout << "Nombres ordenados:" << endl;
    for (int i = 0; i < count; i++) {
        cout << nombres[i] << endl;
    }

    return 0;
}
