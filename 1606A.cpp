#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int ab =0,ba =0;
        for(int i =0; i<s.size()-1; i++) {
            if(s[i] == 'a' && s[i+1] == 'b' ) {
                ab++;
            }
            if(s[i] == 'b' && s[i+1] == 'a') {
                ba++;
            }
        }
        if(ab == ba) {
            cout<<s<<endl;
            continue;
        }
        if(ab < ba) {
            for(int i = s.size()-1; i>=0; i--) {
                if(s[i] == 'a') {
                    s[i] = 'b';
                    break;
                }
            }
        }
        else {
            for(int i =0; i<s.size(); i++) {
                if(s[i] == 'a') {
                    s[i] = 'b';
                    break;
                }
            }
        }
        cout<<s<<endl;
    }
}