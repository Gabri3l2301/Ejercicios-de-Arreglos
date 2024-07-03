#include <iostream>
using namespace std;

void mistrcat(char* str1, const char* str2) {
    while(*str1) {
        str1++;
    }
    while(*str2) {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}

int main() {
    char str1[100];
    char str2[100];
    cout << "Ingrese la primera cadena: ";
    cin.getline(str1, 100);
    cout << "Ingrese la segunda cadena: ";
    cin.getline(str2, 100);
    mistrcat(str1, str2);
    cout << "str1: " << str1 << endl;
    return 0;
}