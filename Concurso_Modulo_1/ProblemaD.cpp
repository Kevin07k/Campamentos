#include<bits/stdc++.h>
using namespace std;
string arr;
int init_cont = 0;
void print_string(int  point){
    int pos = (point - 1 - init_cont + arr.size()) % arr.size();
    cout << arr[pos] << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tam_n, q_querys;
    cin>>tam_n>>q_querys;
    cin>>arr;
    for (int i = 0; i < q_querys; ++i) {
        short int t_type_query;
        int r_point_or_counter;
        cin >> t_type_query >> r_point_or_counter;
        if(t_type_query == 1) {
            init_cont = (init_cont + r_point_or_counter) % tam_n;
        }else{
            print_string(r_point_or_counter);
        }
    }
    return 0;
}