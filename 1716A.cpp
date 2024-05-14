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
ll mod = 1e9+7;

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
    priority_queue<pair<ll,ll>> q;
    while(t--) {
        ll n;
        cin>>n;
        if(n == 1) cout<<2<<endl;
        else cout<<(n+2)/3<<endl;
    }
    return 0;
}