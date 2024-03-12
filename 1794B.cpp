#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;
        long long arr[n];
        for(long long i =0; i<n; i++) {
            cin>>arr[i];
            if(arr[i] == 1) arr[i] =2;
            if(i && arr[i]%arr[i-1] == 0) arr[i] = arr[i]+1;
        }
        for(int i =0; i<n; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}