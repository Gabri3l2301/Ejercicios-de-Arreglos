#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string texto;
    getline(cin, texto); 
    size_t espacio = 0; 
    
    while ((espacio = texto.find(' ')) != string::npos) {
        cout << texto.substr(0, espacio) << endl;
        texto.erase(0, espacio + 1); 
    }
    cout << texto << endl;
    return 0;
}
