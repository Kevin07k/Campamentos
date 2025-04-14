#include<iostream>

using namespace std;

int main() {
    string word;
    cin >> word;
    int contM = 0, contmin = 0;
    for (char letter : word) {
        if (letter >= 65 and letter <= 90) contM++;
        if (letter >= 97 and letter <= 122) contmin++;
    }
    cout << "Existen " << contM << " mayusculas." << endl<<"Existen " << contmin << " minusculas."<<endl;
    return 0;
}