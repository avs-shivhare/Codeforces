

#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    int t;
    cin>>t;
    while(t--) {
        string n;
        cin>>n;
        int ans = 0;
        ans += ((n[0]-'0')-1)*10;
        for(int i =0; i<n.size(); i++) {
            ans += i+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}