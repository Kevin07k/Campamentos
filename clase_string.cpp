#include <bits/stdc++.h>
using namespace std;
void concad(int number_words){
    string paragraph = "";
    for (int i = 0; i < number_words; i++)
    {
        string word; cin >> word;
        paragraph.append(word);
        paragraph.push_back(' ');
    }
    cout << paragraph;
}

void subcadena(string &cadena){
    string sub = cadena.substr(4,3);
    cout<<sub;
}

void remplace_str(string &str,int init, int cant_caracter_for_replace, string value){
    str.replace(init, cant_caracter_for_replace, value);
}

int main()
{
    // int number_words = 0; cin >> number_words;
    // concad(number_words);

    // string s = "Cochabamba";
    // string v= "Ciudad de La Paz Bolivia";
    // subcadena(s);
    // remplace_str(v, 5,5,"Bolivia");
    // remplace_str(v, 10 ,6 ,"Trinidad");

    // v.replace(5, 5, "Bolivia");
    // cout<<v;


    string s = "Copacabana Bolivia";
    if(s.find("Cope") != string::npos)
        cout<<"Si esta";
    else
        cout<<"No esta";


    return 0;
}