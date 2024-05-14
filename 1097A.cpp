

#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    string table;
    cin>>table;
    bool flag = false;
    for(int i = 0; i<5; i++) {
        string val;
        cin>>val;
        if(val[0] == table[0] || val[1] == table[1]) flag = true;
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}