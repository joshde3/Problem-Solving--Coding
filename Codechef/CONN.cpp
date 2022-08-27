#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n%2==0 or n%7==0){
            cout<<"YES"<<endl;
            continue;
        }
        ll n2 = n%2;
        ll n7 = n%7;
        if(n7%2==0 || n2%7==0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

        // if(n==1 || n==3 || n==5){
        //     cout<<"NO"<<endl;
        // }
        // else cout<<"YES"<<endl;
    }
    return 0;
}