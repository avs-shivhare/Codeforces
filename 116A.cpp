

#include<bits/stdc++.h>
using namespace std;
 

int main() {
    int n;
    cin>>n;
    int remaining = 0;
    int ans = 0;
    for(int i =0; i<n; i++) {
        int exit,enter;
        cin>>exit>>enter;
        remaining -= exit;
        remaining += enter;
        ans = max(ans,remaining);
    }
    cout<<ans<<endl;
    return 0;
}