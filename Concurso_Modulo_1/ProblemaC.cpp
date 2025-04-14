#include<iostream>
using namespace std;
int main(){
    int trees, cont = 0;
    cin>>trees;
    for (int i = 0; i < trees; i++)
    {
        int nuts = 0;
        cin>>nuts;
        if(nuts > 10){
            cont += (10 - nuts);
        }
    }
    cout<<abs(cont);
    return 0;
}