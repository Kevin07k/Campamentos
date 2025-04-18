#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tam;
    cin>> tam;
    int A[tam];
    for (int i = 0; i < tam; i++)
    {
        cin>>A[i];
    }
    for (int i = 0; i < tam; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}