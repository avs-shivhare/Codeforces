#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int zero =0,one =0;
        for(int i =0; i<s.size(); i++) {
            if(s[i] == '0') zero++;
            else one++;
        }
        int i = min(zero,one);
        if(i%2 == 1) cout<<"DA"<<endl;
        else cout<<"NET"<<endl;
    }
    return 0;
}