#include <iostream>
using namespace std;

int mistrcmp(const char* str1, const char* str2) {
    while(*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char*)str1 - *(unsigned char*)str2;
}

int main() {
    char str1[100];
    char str2[100];
    cout << "Ingrese la primera cadena: ";
    cin.getline(str1, 100);
    cout << "Ingrese la segunda cadena: ";
    cin.getline(str2, 100);
    int resultado = mistrcmp(str1, str2);
    if(resultado == 0) {
        cout << "Las cadenas son iguales." << endl;
    } else if(resultado > 0) {
        cout << "La cadena str1 es mayor que str2." << endl;
    } else {
        cout << "La cadena str1 es menor que str2." << endl;
    }
    return 0;
}