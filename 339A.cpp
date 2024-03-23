

#include<bits/stdc++.h>
using namespace std;
 

int main() {
    string s;
    cin>>s;
    int n = s.size();
    int ones =0,twos = 0, three=0;
    for(int i =0; i<n; i+=2) {
        if(s[i] == '1') ones++;
        else if(s[i] == '2') twos++;
        else three++;
    }
    for(int i =0; i<n; i+=2) {
        if(ones) {
            ones--;
            s[i] = '1';
        }
        else if(twos) {
            twos--;
            s[i] = '2';
        }
        else s[i] = '3';
    }
    cout<<s<<endl;
    return 0;
}