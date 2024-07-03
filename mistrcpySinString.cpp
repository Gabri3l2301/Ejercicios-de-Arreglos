#include <iostream>
using namespace std;

void mistrcpy(char* str1, const char* str2) {
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
    cout << "Ingrese una cadena: ";
    cin.getline(str2, 100);
    mistrcpy(str1, str2);
    cout << "str1: " << str1 << endl;
    return 0;
}