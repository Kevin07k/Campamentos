#include <bits/stdc++.h>

using namespace std;

void aumentarHora(int &h, int &m) {
    m++;
    if (m > 59) {
        m = 0;
        h++;
        if (h > 23) {
            h = 0;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int h = 23, m = 59;
    aumentarHora(h,m);
    cout << h << ":" << m << endl;
    return 0;
}