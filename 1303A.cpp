

#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int ans = 0;
        int start = -1,end = -1;
        for(int i =0; i<s.size(); i++) {
            if(s[i] == '1') {
                if(start == -1) start = i;
                else {
                    end = i;
                }
            }
        }
        if((start == -1 && end == -1) || end == -1) {
            cout<<0<<endl;
            continue;
        }
        for(int i = start+1; i<end; i++) {
            if(s[i] == '0') ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}