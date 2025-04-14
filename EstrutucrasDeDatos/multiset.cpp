#include<iostream>
#include<map>
#include <set>

using namespace std;

int main() {
    multiset<int> ms;
    ms.insert(5);
    ms.insert(5);
    ms.insert(5);
    ms.insert(7);
    ms.insert(7);
    ms.insert(10);
    cout << "Hay " << ms.count(5) << " repeticiones del 5" << endl;
    cout << "Hay " << ms.count(7) << " repeticiones del 5" << endl;
    cout << "Hay " << ms.count(10) << " repeticiones del 5" << endl;
    cout << "Hay " << ms.count(1) << " repeticiones del 5" << endl;
    ms.erase(5);
    ms.erase(ms.begin());
    ms.clear();
    for (int x: ms) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
