#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int m,n;
        cin>>m>>n;
        int x=max(m,n);
        int y=min(m,n);
        if(m==n){
            cout<<"YES"<<endl;
            continue;
        }
        if(x%2){
            cout<<"NO"<<endl;
            continue;
        }
        int flag=0;
        while(x>=y){
            x=x/2;
            if(x==y){
                flag=1;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}