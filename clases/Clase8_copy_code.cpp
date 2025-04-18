#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x = 4, y = 10;
    int maximo = max(x, y);
    int minimo = min(x, y);

    double a = 14.21, b = 2.3;
    double raiz = sqrt(a);
    double potencia = pow(a, b);
    double valor_abs = abs(a);

    cout<<"El maximo es : "<<maximo<<endl;
    cout<<"El minimo es : "<<minimo<<endl;
    cout<<"El raiz es : "<<raiz<<endl;
    cout<<"El potencia es : "<<potencia<<endl;
    cout<<"El valor obsoluto es : "<<valor_abs<<endl;

    return 0;
}