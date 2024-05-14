

#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans = "";
    int j =0;
    for(int i =0; i<n; i+=j) {
        j++;
        ans = ans+s[i];
    }
    cout<<ans<<endl;
    return 0;
}