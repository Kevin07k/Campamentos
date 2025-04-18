#include <bits/stdc++.h>

using namespace std;

int f(int x, int y) {
    for (int i = x+1; i <= y;i++) {
        x = x + i;
    }
    return x;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x = 5, y = 10;
    cout << f(x, y) << endl;
    cout << x;
    return 0;
}
