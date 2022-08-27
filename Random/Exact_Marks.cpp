#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n,x;
        cin >> n >> x;
        if(x==((n*3)-1) || x==((n*3)-2) || x==((n*3)-5)){
            cout<<"NO"<<endl;
            continue;
        }

        cout<<"YES"<<endl;
        
        if(x%3==0){
            cout<<x/3<<" "<<0<<" "<<n-(x/3)<<endl;
        }
        else if(x%3==1){
            cout<<(x+2)/3<<" "<<2<<" "<<n-((x+2)/3)-2<<endl;
        }
        else if(x%3==2){
            cout<<(x+1)/3<<" "<<1<<" "<<n-((x+1)/3)-1<<endl;
        }


    }
    return 0;
}