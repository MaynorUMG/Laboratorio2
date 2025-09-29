#include <iostream>
#include <fstream>
#include <bitset>
using namespace std;

int TextBynary(string);

fstream archivo("txt.txt", ios::in);   
fstream archivo2("out.txt", ios::out);  

int main() {

    if (!archivo.is_open() || !archivo2.is_open()) {
        cout << "Error al abrir archivos" << endl;
        return 0;
    }

    TextBynary("txt.txt");

    archivo.close();
    archivo2.close();
    return 0;
}

int TextBynary(string text) {
    int numero;
    while (archivo >> numero) {
        bitset<32> binario(numero); 
        cout << "Decimal: " << numero << " El Binario es: " << binario << endl;
        archivo2 << binario << endl;
    }
    cout << endl;
    return 0;  
}
