

#include<bits/stdc++.h>
using namespace std;
 

int main() {
    int n;
    cin>>n;
    bool flag = true;
    for(int i =0;i<n; i++) {
        int val;
        cin>>val;
        if(val == 1) flag = false;
    }
    if(flag) cout<<"EASY"<<endl;
    else cout<<"HARD"<<endl;
    return 0;
}