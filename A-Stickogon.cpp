#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define bl bool
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define vvb vector<bl>
#define vvs vector<vector<string>>
#define vvc vector<vector<char>>
#define vi vector<int>
#define vc vector<char>
#define vb vector<bl>
#define vll vector<ll>
#define vs vector<string>
#define pb push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define f(i,s,e) for(ll i =s; i<e; i++)
#define ef(i,s,e) for(ll i = s; i<=e; i++)
#define rf(i,e,s) for(ll i = e; i>=s; i--)

ll max(ll a,ll b) {
    if(a<=b) return b;
    else return a;
}

ll min(ll a,ll b) {
    if(a<=b) return a;
    else return b;
}

int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        unordered_map<ll,ll> mpp;
        f(i,0,n) {
            ll val;
            cin>>val;
            mpp[val]++;
        }
        ll three = 0,four = 0;
        for(auto i:mpp) {
            three += i.second/3;
            four += i.second/4;
        }
        cout<<max(three,four)<<endl;
    }
    return 0;
}