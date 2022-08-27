#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        int ans=2;
        if(a==x || a==y){
            ans--;
        }
        if(b==x || b==y){
            ans--;
        }
        cout<<ans<<endl;
    }
    return 0;
}