

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back

int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        ll ind = n;
        n = 2*n;
        vll v;
        for(ll i =0; i<n; i++) {
            ll val;
            cin>>val;
            v.pb(val);
        }
        sort(v.begin(),v.end());
        cout<<abs(v[ind-1]-v[ind])<<endl;
    }
    return 0;
}