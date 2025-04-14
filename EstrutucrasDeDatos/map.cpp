#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<string,int> dias;
    dias["enero"] = 31;
    dias["febrero"] = 28;
    dias["marzo"] = 31;
    dias["abril"] = 30;
    dias["mayo"] = 31;
    dias["junio"] = 30;
    dias.insert(make_pair("julio",31));
    dias.insert(make_pair("agosto",31));
    dias.insert(make_pair("septiembre",30));
    dias.insert(pair<string,int>("octubre", 31));
    dias.insert(pair<string,int>("noviembre",30));
    dias.insert(pair<string,int>("diciembre",31));

   // Borrado
    dias.erase("febrero");
    if (dias.find("febrero") != dias.end()) {
        cout<<"febrero esta en le calendario"<<endl;
    }else {
        cout<<"febro no esta en le calendario"<<endl;
    }
    //Recorid
    for (const auto& elements : dias) {
        cout<<elements.first<<" tiene "<<elements.second<<" dias"<<endl;
    }
}
