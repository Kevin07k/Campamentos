#include<iostream>
#include<map>     // se usa la libreria mapa usar multimap
// #include <set>

using namespace std;

int main() {
    multimap<string, int> mm;
    mm.emplace("febrero", 28);// multi map me permite tener llaves dublicadas
    mm.emplace("febrero", 29); // emplace para introducir directamente el dato
    mm.emplace("enero", 31);
    mm.emplace("septiembre", 30);
    mm.erase("febrero"); // Borra todas los elementos con llave febrero
    for(auto & elem : mm) {
        cout << elem.first << " " << elem.second << endl;
    }

    return 0;
}