#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        string a = "codeforces";
        int ans = 0;
        for(int i =0;i<10; i++) {
            if(a[i] != s[i]) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}