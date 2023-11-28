// Crea un programa que añada elementos a un vector de enteros mediante el uso del método push_back. Luego, utiliza un iterador para recorrer y mostrar cada elemento del vector.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros;
    int n;

    cout << "Introduce un numero: ";
    cin >> n;

    while (n != 0) {
        numeros.push_back(n);
        cout << "Introduce un numero: ";
        cin >> n;
    }

    cout << "Los numeros introducidos son: ";

    for (vector<int>::iterator i = numeros.begin(); i != numeros.end(); i++) {
        cout << *i << " ";
    }

    cout << endl;

    return 0;
}