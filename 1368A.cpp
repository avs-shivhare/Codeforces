

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll a,b,n;
        cin>>a>>b>>n;
        ll cnt =0;
        ll sum =0;
        while(sum<=n) {
            if(a > b) {
                b += a;
                sum =b;
            }
            else {
                a+=b;
                sum =a;
            }
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}