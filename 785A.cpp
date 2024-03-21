

#include<bits/stdc++.h>
using namespace std;
 

int main() {
    int T =4;
    int C = 6;
    int O = 8;
    int D = 12;
    int I = 20;
    int n;
    cin>>n;
    long long ans =0;
    for(int i =0; i<n;i++) {
        string val;
        cin>>val;
        if(val == "Tetrahedron") {
            ans += T;
        }
        else if(val == "Cube") {
            ans += C;
        }
        else if(val == "Octahedron") {
            ans += O;
        }
        else if(val == "Dodecahedron") {
            ans += D;
        }
        else {
            ans += I;
        }
    }
    cout<<ans<<endl;
    return 0;
}