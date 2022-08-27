#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    for (ll i = 1; i <= t ; i++){
    ll n;
    cin >> n;
    ll op=n;
    ll sum=0,m;
    // cout<<op<<endl;
    while(op>0)    
    {    
        m=op%10;    
        sum=sum+m;    
        op=op/10;    
    } 
    int ans = 9-(sum%9);
    
    // cout<<ans<<endl;
    ll mn=LONG_LONG_MAX;
    ll tmp;
    tmp=(n*10)+ans;
    mn= min(mn,tmp);

    if(ans!=0){
        ll prefix=10;
        while(prefix<=n){
            prefix*=10;
        }
        tmp = (ans*prefix)+n;
        }
    mn=min(mn,tmp);











    // ll mini=LONG_LONG_MAX;
    // ll temp;
    // for(ll j=0;j<10;j++){
    //     temp=(n*10)+j;
    //     if(temp%9==0){
    //         mini=min(mini,temp);
    //     }
    // }
    // for(ll j=1;j<10;j++){
    //     ll prefix=10;
    //     while(prefix<=n){
    //         prefix*=10;
    //     }
    //     temp = (j*prefix)+n;
    //     // cout<<temp<<endl;
    //     if(temp%9==0){
    //         mini=min(mini,temp);
    //     }
    // }

    cout<<"Case #"<<i<<": "<<mn<<endl;       
}
    
    return 0;
}