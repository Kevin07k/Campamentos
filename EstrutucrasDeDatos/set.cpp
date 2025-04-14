#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<int> conj; // Creamos un set
    conj.insert(5); // Insercion
    conj.insert(2);
    conj.insert(9);
    conj.insert(3);
    // Borrar en un set
    if (conj.find(7) != conj.end()) { // find nos sirve par buscar
        cout << "Esta el 7" << endl;
    }else {
        cout << "No esta el 7" << endl;
    }
    conj.erase(7); // podemos borrar datos que no existen
    conj.erase(5);
    // Recorrer con c++ 11
    for (auto x: conj) {
        cout<<x<<" ";
    }
    // conj.clear()
    // formatea todo el set es como un borron y cuenta nueva
    return 0;
}