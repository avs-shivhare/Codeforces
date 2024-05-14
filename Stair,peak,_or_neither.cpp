

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vll vector<long long>
#define vs vector<string>


int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll a,b,c;
        cin>>a>>b>>c;
        if(a < b && b < c) cout<<"STAIR"<<endl;
        else if(a<b && b>c) cout<<"PEAK"<<endl;
        else cout<<"NONE"<<endl;
    }
    return 0;
}