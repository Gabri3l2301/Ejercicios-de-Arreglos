#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de números: ";
    cin >> n;

    int numeros[100]; // Suponiendo que no habrá más de 100 números
    cout << "Ingrese los números:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    int mayor = numeros[0];
    int menor = numeros[0];
    int repMayor = 0, repMenor = 0;

    for (int i = 0; i < n; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
            repMayor = 1;
        } else if (numeros[i] == mayor) {
            repMayor++;
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
            repMenor = 1;
        } else if (numeros[i] == menor) {
            repMenor++;
        }
    }
    cout << "Mayor: " << mayor << ", Repeticiones: " << repMayor << endl;
    cout << "Menor: " << menor << ", Repeticiones: " << repMenor << endl;

    return 0;
}
