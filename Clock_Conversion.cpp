

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
        string s;
        cin>>s;
        int time = (s[0]-'0')*10+(s[1] - '0');
        if(time == 12) {
            cout<<s<<" PM"<<endl;
            continue;
        }
        else if(time == 00) {
            cout<<"12"<<s.substr(2)<<" AM"<<endl;
            continue;
        }
        if(time -12 > 0) {
            if(time-12 <=9) cout<<"0";
            cout<<time-12<<":"<<s.substr(3)<<" PM"<<endl;
        } 
        else cout<<s<<" AM"<<endl;
    }
    return 0;
}