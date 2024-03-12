#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;
        if(n%2 == 1 || n<4) {
            cout<<-1<<endl;
            continue;
        }
        n /= 2;
        cout<<((n+2)/3)<<" "<<(n/2)<<endl;
        
    }
    return 0;
}