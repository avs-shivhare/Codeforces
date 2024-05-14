

#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    string s;
    cin>>s;
    string ans = "";
    for(char i:s) {
        char ch = toupper(i);
        if(ch == 'A' || ch == 'O' || ch == 'Y' || ch == 'E' || ch == 'U' || ch == 'I') {
            continue;
        }
        ch = tolower(i);
        ans = ans+ "." + ch;
    }
    cout<<ans<<endl;
    return 0;
}