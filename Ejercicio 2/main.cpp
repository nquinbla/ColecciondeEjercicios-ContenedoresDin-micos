//Realiza un programa que utilice el contenedor estándar list para almacenar una secuencia de números decimales. Luego, crea un adaptador de secuencia stack para este contenedor. Muestra cómo funcionan las operaciones push, pop y top en esta pila.

#include <iostream>
#include <list>
#include <stack>

using namespace std;

int main()
{
    list<double> l;
    stack<double> s;

    l.push_back(1.1);
    l.push_back(2.2);
    l.push_back(3.3);
    l.push_back(4.4);
    l.push_back(5.5);

    cout << "Lista: ";
    for (list<double>::iterator i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    for (list<double>::iterator i = l.begin(); i != l.end(); i++)
    {
        s.push(*i);
    }

    cout << "Pila: ";
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}