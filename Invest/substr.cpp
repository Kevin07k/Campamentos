#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    /* .substr() es una funcion que extrae una subcadena de una cadena,
     * su complejidad es O(n) donde n es la longitud de la subcadena
     * */
    string frase = "Hola mundo como estas";
    string palabra1 = frase.substr(5, 5); // Extrae "mundo"
    // .substr(pos, size()) si en caso no se aclara el final
    string palabra2 = frase.substr(11); // Extrae "mundo"

    // esta fuera de un rango valido por lo tanto lanzara un error a la hora de compilar
    //string palabra3 = frase.substr(frase.size() + 3); // Extrae "mundo"



    cout << palabra1 << endl;
    cout << palabra2 << endl;
    return 0;
}