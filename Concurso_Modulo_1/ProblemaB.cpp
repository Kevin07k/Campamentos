#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            if (a <= i && i <= b)
            {
                cout << i << endl;
                return 0;
            }
        }
    }
    cout<<"-1"<<endl;
    return 0;
}
