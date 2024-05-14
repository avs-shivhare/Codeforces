

#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,m;
        cin>>n>>m;
        char arr[n][m];
        for(int i =0; i<n; i++) {
            for(int j =0; j<m; j++) cin>>arr[i][j];
        }
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        int ans = 0;
        for(int i =0; i<n-1; i++) {
            if(arr[i][m-1] == 'R' && !vis[i][m-1]) {
                vis[i][m-1] = true;
                ans++;
            }
        }
        for(int j =0; j<m-1; j++) {
            if(arr[n-1][j] == 'D' && !vis[n-1][j]) {
                vis[n-1][j] = true;
                ans++;
            }
        }
        cout<<ans<<endl;
    }   
    return 0;
}