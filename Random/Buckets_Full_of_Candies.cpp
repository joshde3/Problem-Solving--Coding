#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n,m,l;
        cin>>n>>m>>l;
        ll reb=m;
        for (ll i = n-1; i >=0;)
        {
            /* code */
            ll nob=l+i;
            // int reb=m;
            if(reb>=nob){
                reb=reb%nob;
            }
            i=reb-l;
        }
        cout<<reb<<endl;
        
    }
    return 0;
}