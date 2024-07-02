#include <iostream>
#include <string>
using namespace std;

bool esEspacio(char c) {
    return c == ' ';
}

char aMayuscula(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    }
    return c;
}

char aMinuscula(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

void convertirMayusculasIniciales(string &frase) {
    bool esNuevoPalabra = true;

    for (char &c : frase) {
        if (esEspacio(c)) {
            esNuevoPalabra = true;
        } else if (esNuevoPalabra) {
            c = aMayuscula(c);
            esNuevoPalabra = false;
        } else {
            c = aMinuscula(c);
        }
    }
}

int main() {
    string frase = "cáceres patrimonio de la humanidad";
    convertirMayusculasIniciales(frase);
    cout << "Frase convertida: " << frase << endl;
    return 0;
}
