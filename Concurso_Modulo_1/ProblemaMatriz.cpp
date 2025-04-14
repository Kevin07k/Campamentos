#include <iostream>

using namespace std;

int main() {
    int caso1;
    cin >> caso1;
    int matriz1[caso1][caso1];
    for (int i = 0; i < caso1; i++) {
        matriz1[i][i] = 1;
        int posx = caso1 - i-1 ;
        matriz1[posx][i] = 2;
    }


    for (int i = 0; i < caso1; i++) {
        for (int j = 0; j < caso1; j++) {
            if (matriz1[i][j] == 1 or matriz1[i][j] == 2) {
                cout << matriz1[i][j];
            } else {
                cout << 3;
            }
        }
        cout << endl;
    }
    return 0;
    
}