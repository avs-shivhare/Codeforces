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
#define af(i,x) for(auto i : x)
#define all(p) p.begin(),p.end()
ll mod = 1e9+7;

ll max(ll a,ll b) {
    if(a<=b) return b;
    else return a;
}

ll max(vll x) {
    ll maxi = LLONG_MIN;
    af(i,x) {
        maxi = max(maxi,i);
    }
    return maxi;
}

ll min(vll x) {
    ll mini = LLONG_MAX;
    af(i,x) {
        mini = min(mini,i);
    }
    return mini;
}

ll min(ll a,ll b) {
    if(a<=b) return a;
    else return b;
}

int main() {
    ll t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        bl flag = true;
        f(i,0,s.size()-1) {
            if(s[i] != s[i+1]) {
                flag = false;
                swap(s[i],s[i+1]);
                break;
            }
        }
        if(flag) no;
        else {
            yes;
            cout<<s<<endl;
        }
    }
    return 0;
}