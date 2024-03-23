

#include<bits/stdc++.h>
using namespace std;
 

int main() {
    string s;
    cin>>s;
    unordered_set<char> st;
    for(char i : s) {
        st.insert(i);
    }
    if(st.size() %2 == 1) cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;
    return 0;
}