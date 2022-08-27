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
        cin>>n;
        if(n<6){
            cout<<0<<endl;
            continue;
        }
        cout<<((n-6)/7)+1<<endl;
    }
    return 0;
}