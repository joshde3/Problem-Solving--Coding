#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<vector<ll>> v(n,vector<ll>(m));
        ll mx=LLONG_MIN;
        for(ll i=0;i<n;i++){
            for (ll j = 0; i < m; j++)
            {
                cin>>v[i][j];
                mx=max(mx,v[i][j]);
            }
        }
        ll ans=m*n;
        for(ll i=0;i<n;i++){
            for (ll j = 0; i < m; j++)
            {
                if(v[i][j]==mx){
                    ll t = (i+1) * (j+1);
                    t=max(t,(i+1) * (m-j));
                    t=max(t,(n-i) * (j+1));
                    t=max(t,(n-1) * (m-j));
                    ans=min(ans,t);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}