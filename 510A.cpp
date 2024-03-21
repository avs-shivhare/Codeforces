

#include<bits/stdc++.h>
using namespace std;
 
void print(int &m) {
    for(int j =0; j<m-1; j++) cout<<".";
}
int main() {
    int n,m;
    cin>>n>>m;
    bool flag = true;
    for(int i =0; i<n; i++) {
        if(i%2 == 0) {
            for(int j =0; j<m; j++) cout<<"#";
        }
        else {
            if(flag) {
                print(m);
                cout<<"#";
                flag = !flag;
            }
            else {
                cout<<"#";
                print(m);
                flag = !flag;
            }
        }
        cout<<endl;
    }
    return 0;
}