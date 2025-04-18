#include<bits/stdc++.h>
using namespace std;
unsigned long long int cont;

int fibo(unsigned long long int n){
    cont ++;
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibo(n-1) + fibo(n-2);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    for (int i = 0; i <= 60; ++i) {
        cont = 0;
        unsigned long long int f = fibo(i);
        cout<<"Para sacar fibo de "<<i<<" que es "<<f<<" se nesecitaron "<<cont<<" llamadas recursivas"<<endl;
    }
    return 0;
}