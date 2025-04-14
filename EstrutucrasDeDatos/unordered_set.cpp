#include<iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> s;
    int N = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        s.insert(e);
    }
    cout << s.size();
}
