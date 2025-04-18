#include<iostream>
using namespace std;

int main()
{
    for (int i = 2; i<= 20; i+=3)
    {
        if (i== 8)continue;
        if (i > 14) break;
        cout<<i<<" ";
    }
    return 0;
}
