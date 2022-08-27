#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll md=998244353;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin>>n;
        string str1;
        cin>>str1;
        ll a_dec[n]={0};
        ll ct=1;
        ll answer =0;
        if(str1[0]=='1'){
            a_dec[0]=1;
        }
        ll morris_garages=a_dec[0];
        for (ll i = 1; i < n; i++)
        {
            if(str1[i]=='1'){
                morris_garages+=(i+1);
            }
            a_dec[i]=morris_garages;
            a_dec[i]=a_dec[i]%2;
        }
        for (ll i = n-1; i >=0; i--)
        {
            if(a_dec[i]==1){
                answer+=ct;
                answer=answer%md;
            }
            ct=ct*2;
            ct=ct%md;
        }
        cout<<answer%md<<endl;
    }
    return 0;
}