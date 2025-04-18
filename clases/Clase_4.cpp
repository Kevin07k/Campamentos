#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // Obtener los digitos de un numero
    int n;
    cin >> n;
    while (n > 0)
    {
        cout << n % 10 << endl;
        n = n / 10;
    }
}
