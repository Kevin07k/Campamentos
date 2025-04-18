#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int number_of_tickets, number_of_people;
    cin >> number_of_tickets >> number_of_people;
    multiset<ll> price_of_the_tickets;
    for (int i = 0; i < number_of_tickets; i++) {
        ll num;
        cin >> num;
        price_of_the_tickets.insert(num);
    }
    while (number_of_people--) {
        ll money; cin >> money;
        auto it = price_of_the_tickets.upper_bound(money);
        if (it == price_of_the_tickets.begin()) {
            cout << "-1" << endl;
            continue;
        }
        --it;
        cout << *it << endl;
        price_of_the_tickets.erase(it);
    }
}
