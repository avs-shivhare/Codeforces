
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define db double
#define str string
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
#define vvb vector<vb>
#define vvs vector<vector<string>>
#define vvc vector<vc>
#define vs vector<string>
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define pp pop
#define ps push
#define umap unordered_map
#define uset unordered_set
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define f(i,s,e) for(ll i =s; i<e; i++)
#define fi(i,s,e,x) for(ll i = s; i<e; i+=x)
#define ef(i,s,e) for(ll i = s; i<=e; i++)
#define rf(i,e,s) for(ll i = e; i>=s; i--)
#define af(i,x) for(auto i : x)
#define aff(i,x) for(auto &i: x)
#define all(p) p.begin(),p.end()
#define out(x) cout<<x<<endl
#define wh while
#define si(x) x.size()
#define pq priority_queue
#define data tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update>
ll mod = 1e9+7;
 
template<typename Var,typename Val,typename Limit> void in(Var &x,Limit n) {f(i,0,n) {Val val; cin>>val; x.pb(val);}}
template<typename Var> void outall(Var x) {af(i,x) {cout<<i<<" ";} cout<<endl;}
 
 
 
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
 
template<typename T> T hcf(T x,T y) {
    if(x == 0) return y;
    if(y == 0) return x;
    if(x > y) return hcf(x%y,y);
    return hcf(x,y%x);
}
 
template<typename T> T power(T base,T pow) {
    if(pow == 0) return 1;
    T temp = power(base,pow/2);
    if(pow & 1) return base*temp*temp;
    return temp*temp;
}
 
ll rowdiff[4] = {-1,0,0,1};
ll coldiff[4] = {0,-1,1,0};
 
void prime(vb &arr,ll n) {
    if(n < 2) return;
    arr.resize(n+1,true);
    arr[0] = false;
    arr[1] = false;
    for(ll i =2; i*i<=n; i++) {
        if(arr[i]) {
            for(ll j = i*i; j<=n; j+=i) arr[j] = false;
        }
    }
    return;
}
 
ll ans =0;
void dfs(ll node,ll parent,vll adj[],ll cnt,ll &m,uset<ll> &st) {
    //out("done");
    if(cnt== m) return;
    bl flag = true;
    af(i,adj[node]) {
        if(i != parent) {
            if(st.count(node) && st.count(i)) {
                dfs(i,node,adj,cnt+1,m,st);
            }
            else dfs(i,node,adj,0,m,st);
            flag = false;
        }
    }
    if(flag) ans++;
    return;
}
 
int main() {
    // ll t;
    // fast_io
    // cin>>t;
    // wh(t--) {
        fast_io
        ll n,m;
        cin>>n>>m;
        uset<ll> st;
        f(i,0,n) {
            ll x;
            cin>>x;
            if(x) st.insert(i+1);
        }
        vll adj[n+1];
        f(i,0,n-1) {
            ll x,y;
            cin>>x>>y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        ans =0;
        dfs(1,0,adj,0,m,st);
        out(ans);
    // }
    
    return 0;
}