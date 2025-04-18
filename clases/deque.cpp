#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int N = 10;
    queue<int> v; // Pila primer en entrar, primero en salir
    v.push(2);
    v.push(0);
    v.push(0);
    v.push(7);
    while (!v.empty()) {
        cout<<v.front()<<" ";
        v.pop();
    }
}
