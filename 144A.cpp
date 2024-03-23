

#include<bits/stdc++.h>
using namespace std;
 

int main() {
    int n;
    cin>>n;
    int a;
    int mini =INT_MAX;
    int imaxi =-1;
    int imini =-1;
    int maxi = INT_MIN;
    for(int i =1; i<=n; i++) {
        cin>>a;
        if(maxi < a) {
            imaxi = i;
            maxi = a;
        }
        if(mini >= a) {
            imini = i;
            mini= a;
        }
    }
    //cout<<imini<<" "<<imaxi<<endl;
    if(imaxi > imini) {
        cout<<(n-imini)+(imaxi-2)<<endl;
    }
    else cout<<(n-imini)+(imaxi-1)<<endl;
    return 0;
}