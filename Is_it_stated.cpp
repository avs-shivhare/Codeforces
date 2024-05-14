

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
        string s;
        cin>>s;
        int i = s.find("it");
        if(i != string::npos) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}