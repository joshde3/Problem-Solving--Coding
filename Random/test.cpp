#include <bits/stdc++.h>
#define ll long long
using namespace std;

int fact(int n){
    if (n==0) return 1;
    return n * fact(n-1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cout<<fact(5);
    return 0;
}