

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
        ll n,a,b;
        cin>>n>>a>>b;
        ll one = n*a;
        ll two;
        two = (n/2)*b;
        n = n%2;
        two += n*a;
        if(one < two) cout<<one<<endl;
        else cout<<two<<endl;
    }
    return 0;
}