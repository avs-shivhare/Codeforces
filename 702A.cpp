

#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    int n;
    cin>>n;
    int cnt =1;
    int ans =0;
    int prev =0;
    for(int i =0; i<n; i++) {
        int val;
        cin>>val;
        if(i == 0 || prev >= val) {
            ans = max(ans,cnt);
            cnt =1;
        }
        else {
            cnt++;
        }
        prev = val;
    }
    ans = max(ans,cnt);
    cout<<ans<<endl;
    return 0;
}