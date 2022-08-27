#include <bits/stdc++.h>
using ll = long long int;
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin>>n;
        // ll cnt=0;
        // while(n>0){
        //     if(n%2)
        //     {
        //         cnt++;
        //     }
        //     // cout<<n<<"->"<<cnt<<endl;
        //     n--;
        // }
        if(n%2){
            cout<<(n+1)/2<<endl;
        }
        else
        cout<<n/2<<endl;
        // cout<<endl<<endl;
    }
    return 0;
}