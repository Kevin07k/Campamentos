#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tam;
    cin>> tam;
    // Creamos el arreglo
    int a[tam];
    // Pedir el arreglo
    for (int i = 0; i < tam; i++)
    {
        cin>>a[i];
    }
    // Ordenamos
    sort(a, a+tam); //Prdenamos de menor a mayor
    sort(a, a+tam, greater<int>()); //Ordena de mayor a menor
    // complejidad del sort es o(n log n);

    // Imprimir el arreglo
    for (int i = 0; i < tam; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}