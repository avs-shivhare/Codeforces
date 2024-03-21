#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int x,y,z;
    cin>>x>>y>>z;
    if(x <= y && y<= z || z<= y && y<= x) {
        cout<<abs(z-y) + abs(y-x)<<endl;
    }
    else if(y<= x && x<= z || z<= x && x<= y) {
        cout<<abs(z-x) + abs(x-y)<<endl;
    }
    else {
        cout<<abs(y-z) + abs(z-x)<<endl;
    }
    return 0;
}