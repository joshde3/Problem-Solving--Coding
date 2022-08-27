#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--){
        ll x,y,n,r;
        cin>>x>>y>>n>>r;
        if(r<(x*n)){
            cout<<(-1)<<endl;
        }
        else{
            ll pb=(r-n*x)/(y-x);
            pb=min(pb,n);
            ll nb=n-pb;
            cout<<nb<<" "<<pb<<endl;
        }
    }
	return 0;
}
