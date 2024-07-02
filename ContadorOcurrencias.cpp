#include <iostream>
using namespace std;

int contarOcurrencias(string cadena, char letra) {
    int contador = 0;
    for (char c : cadena) {
        if (c == letra) {
            contador++;
        }
    }
    return contador;
}

int main() {
    string cadena;
    char letra;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Ingrese una letra: ";
    cin >> letra;
    int ocurrencias = contarOcurrencias(cadena, letra);
    cout << "La letra " << letra << " aparece " << ocurrencias << " veces en la cadena." << endl;
    return 0;
}
