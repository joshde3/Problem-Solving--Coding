#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll cnt;

ll Nearto(ll n){
    return pow(2,floor(log2(n)));
}

void fun(ll n){
    if(n==0) return;
    cnt++;
    fun(n-Nearto(n));
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--){
        cnt=0;
        ll x;
        cin>>x;
        fun(x);
        cout<<cnt-1<<endl;
    }
    // cout<<Nearto(15)<<endl;
    // fun(10);
    // cout<<cnt-1;
    return 0;
}