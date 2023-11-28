//Crea un programa que tenga un vector de enteros. Luego, utiliza la función sort de la biblioteca de algoritmos para ordenar los elementos del vector. Además, utiliza la función max_element para encontrar el elemento más grande del vector.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "El vector es: "  << "v" << endl;
    sort(v.begin(), v.end());
    cout << "El elemento mas grande es: " << *max_element(v.begin(), v.end()) << endl;
    return 0;
}

