

#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    int n;
    cin>>n;
    int i =1;
    int sum = 0;
    int temp = 0;
    while(sum<=n) {
        temp += i;
        sum += temp;
        i++;
    }
    cout<<i-2<<endl;
    return 0;
}