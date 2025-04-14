#include <iostream>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    if (a > b && --a == b)
    {
        cout << "Yes" << endl;
    }
    else if (a < b && a == --b)
    {
        cout << "Yes" << endl;
    }
    else if (a == 1 && 10 == ++b || 1 == b && 10 == ++a)
    {
        cout << "Yes" << endl;
    }
    else if (a == b)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
