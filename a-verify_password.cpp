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
ll mod = 1e9+7;

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

int main() {
    ll t;
    fast_io
    cin>>t;
    while(t--) {
        fast_io
        ll n;
        cin>>n;
        string s;
        cin>>s;
        bl num = true,lat = true;
        char prev = 'A';

        f(i,0,n) {
            if(prev == 'A' && '0' <= s[i] && s[i] <= '9') {
                prev = s[i];
            }
            else if('0' <= s[i] && s[i] <= '9' ) {
                if(prev > s[i]) {
                    num = false;
                    break;
                }
                prev = s[i];
            }
            if(i>0 && '0' <= s[i] && s[i] <= '9' && 'a'<= s[i-1] && s[i-1] <= 'z') {
                num = false;
                break;
            }
        }
        prev = 'A';
        f(i,0,n) {
            if(prev == 'A' && 'a'<= s[i] && s[i] <= 'z') {
                prev = s[i];
            }
            else if('a'<= s[i] && s[i] <= 'z' ) {
                if(prev > s[i]) {
                    lat = false;
                    break;
                }
                prev = s[i];
            }
        }
        if(!num || !lat) no;
        else yes;
    }
    return 0;
}