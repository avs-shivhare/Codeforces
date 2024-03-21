#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        long long sum =1;
        for(int i =0; i<n; i++) {
            int val;
            cin>>val;
            sum *= val;
        }
        sum =sum+n-1;
        cout<<2022*sum<<endl;
    }
    return 0;
}