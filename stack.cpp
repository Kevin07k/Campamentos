#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    stack<string> s;
    s.push("Bayern München");
    s.push("Manchester United");
    s.push("Real Madrid");
    while (!s.empty()) {
        cout<<s.top()<<endl;
        s.pop();
    }
}