#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    /* En el mejor de los caso es O(n)
        en el peor es O(n * m);
    */

    string text = "Hello World";
    int pos = text.find("World");
    if (pos != string::npos)
    // string::npos => Es el valor que devolvera en caso de no
    // encuentre la subcadena
    {
        cout << "Encontramos en la posicion: " << pos << "\n";
    }

    // su busqueda inica desde la posicion 5 en adelante
    int pos2 = text.find('o', 5);
    cout<<"Primera 'o' en la posicion: "<<pos2<<"\n";

}