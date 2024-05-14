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
        vll arr,arr2;
        f(i,0,n) {
            ll val;
            cin>>val;
            arr.pb(val);
        }
        f(i,0,n) {
            ll val;
            cin>>val;
            arr2.pb(val);
        }
        ll cnt = 0;
        ll i =0, j = 0;
        while(i<n && j<n) {
            if(arr[i] <= arr2[j]) {
                i++;
                j++;
            }
            else {
                j++;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}