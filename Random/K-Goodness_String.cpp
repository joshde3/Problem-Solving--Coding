#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for(int i=1;i<=t;i++){
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll same=0,notsame=0;
        for (ll j = 0; j <n/2; j++)
        {
            if(s[j]==s[n-j-1]){
                same++;
            }
            else notsame++;
        }
        // cout<<"notsame : "<<notsame<<endl;
        // cout<<"same : "<<same<<endl;
        if(notsame==k){
            cout<<"Case #"<<i<<": "<<0<<endl;
            continue;
        }
        
        if(notsame<k){
            cout<<"Case #"<<i<<": "<<(k-notsame)<<endl;
        }
        else {
            cout<<"Case #"<<i<<": "<<(notsame-k)<<endl;
        }


    }
    return 0;
}