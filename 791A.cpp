

#include<bits/stdc++.h>
using namespace std;
 

int main() {
    long long a,b;
    cin>>a>>b;
    int cnt =0;
    while(a<=b) {
        a *=3;
        b *=2;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}