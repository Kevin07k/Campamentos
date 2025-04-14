#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //priority_queue<int> pq;// ordena de mayor a menor
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(7); // son o(long n)
    pq.push(2);
    pq.push(10);
    //Recorrer - decolar
    while (!pq.empty()) {
        cout<<pq.top()<<" "; // para acceder al primer elemento usamos top
        pq.pop();// eliminamos el primer elemento y o(1)
    }

}
