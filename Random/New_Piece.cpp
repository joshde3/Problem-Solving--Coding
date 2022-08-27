#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int a,b,p,q;
        cin>>a>>b>>p>>q;
        if(a==p && b==q){
            cout<<0<<endl;
            continue;
        }  
        if((a+b)%2==(p+q)%2){
            cout<<2<<endl;
        }
        else cout<<1<<endl;
        }
    return 0;
}