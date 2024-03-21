#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    int count =0;
    while(t--) {
        string s;
        cin>>s;
        if(s == "++X" || s == "X++") count++;
        else count--;
    }
    cout<<count<<endl;
    return 0;
}