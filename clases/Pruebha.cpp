#include <iostream>
#include <stack>
using namespace std;
int f(int x, int y)
{
    x = y;
    y = x;
    return x + y;
}
int main()
{
    int x = f(10, 2);
    return 0;
}