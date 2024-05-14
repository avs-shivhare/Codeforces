

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
        ll n;
        cin>>n;
        bool row = true;
        bool col =  true;
        for(int i =0;i<n; i++) {
            for(int j =0; j<n; j++) {
                if(row) cout<<"##";
                else cout<<"..";
                row = !row;
            }
            cout<<endl;
            for(int j =0; j<n; j++) {
                if(col) cout<<"##";
                else cout<<"..";
                col = !col;
            }
            cout<<endl;
            if(n%2 == 0) {
                row = !row;
                col = !col;
            }
        }
    }
    return 0;
}