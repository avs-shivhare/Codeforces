#include<bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl "\n"
#define bl bool
#define pll pair<ll,ll>
#define pii pair<int,int>
#define pss pair<string,string>
#define p pair
#define V vector
#define fs first
#define ss second
#define vi vector<int>
#define vc vector<char>
#define vb vector<bl>
#define vll vector<ll>
#define vvi vector<vi>
#define vvll vector<vll>
#define vvb vector<bl>
#define vvs vector<vector<string>>
#define vvc vector<vector<char>>
#define vs vector<string>
#define pb push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define f(i,s,e) for(ll i =s; i<e; i++)
#define ef(i,s,e) for(ll i = s; i<=e; i++)
#define rf(i,e,s) for(ll i = e; i>=s; i--)
#define af(i,x) for(auto i : x)
#define all(p) p.begin(),p.end()
#define out(x) cout<<x<<endl
#define wh while
#define si(x) x.size();
ll mod = 1e9+7;

void in(vll &x,ll &n) {f(i,0,n) { ll val; cin>>val; x.pb(val); }}
void in(string &s) { cin>>s; }

class disjointSet {
    vector<int> rank,parent,size;
    public:

    disjointSet(int n) {
        rank.resize(n+1,0);
        parent.resize(n+1);
        size.resize(n+1,1);
        for(int i =0;i<=n; i++) {
            parent[i] =i;
        }
    }

    int findUparent(int node) {
        if(node == parent[node]) return node;
        return parent[node] = findUparent(parent[node]);
    }
    void addbySize(int u,int v) {
        int Uu = findUparent(u);
        int Uv = findUparent(v);
        if(Uu == Uv) return;
        if(size[Uu] < size[Uv]) {
            parent[Uu] = Uv;
            size[Uv] += size[Uu];
        }
        else {
            parent[Uv] = Uu;
            size[Uu] += size[Uv];
        }
    }
    void addbyRank(int u,int v) {
        int Uu = findUparent(u);
        int Uv = findUparent(v);
        if(Uu == Uv) return;
        if(rank[Uu]<rank[Uv]) {
            parent[Uu] = Uv;
        }
        else if(rank[Uv] < rank[Uu]) {
            parent[Uv] = Uu;
        }
        else {
            parent[Uv] =Uu;
            rank[Uu]++;
        }
    }
};

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


ll find(ll n,unordered_map<ll,ll> &dp,ll m) {
    if(n> m) return 1e9;
    if(n == m) return 0;
    if(dp.find(n) != dp.end()) return dp[n];
    ll take= 1e9,notTake = 1e9;
    if(n*2 <= m) take = 1+find(n*2,dp,m);
    if(n*3 <= m) notTake = 1+find(n*3,dp,m);
    return dp[n] = min(take,notTake);
}
int main() {
    // ll t;
    // fast_io
    // cin>>t;
    // wh(t--) {
        fast_io
        ll n,m;
        cin>>n>>m;
        unordered_map<ll,ll> dp;
        ll ans = find(n,dp,m);
        if(ans >= 1e9) out(-1);
        else out(ans);
    // }
    return 0;
}