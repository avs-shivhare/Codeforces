#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        string n;
        cin>>n;
        vector<string> ans;
        int cnt =0;
        for(int i =n.size()-1; i>=0; i--) {
            if(n[i] != '0') {
                ans.push_back(n.substr(i));
                n[i] = '0';
                cnt++;
            }
        }
        if(cnt == 0) {
            cout<<1<<endl;
            cout<<n<<endl;
            continue;
        }
        cout<<cnt<<endl;
        for(string i : ans) {
            cout<<i<<" ";
        }
        cout<<endl;
    }   
    return 0;
}