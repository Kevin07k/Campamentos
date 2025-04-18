#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int N, W;
    map<ll,ll, greater<ll>> quesos;
    cin>>N>>W;
    for (int i = 0; i < N; ++i) {
        int a,b;
        cin>>a>>b;
        quesos[a]+=b;
    }
    ll res = 0;
    for (auto queso: quesos) {
        ll deliciosidad = queso.first;
        ll cantidad = queso.second;
        // cout<<deliciosidad<<" "<<cantidad<<endl;
        if (cantidad > W) {
            res += (W* deliciosidad);
            W -= W;
            break;
        }else {
            res += (cantidad * deliciosidad);
            W -= cantidad;
        }
    }
    cout<<res<<endl;
    return 0;
}