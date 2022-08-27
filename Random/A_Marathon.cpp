#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin>>a;
        int n=3;
        int cnt=0;
        while(n>0){
            int x;
            cin>>x;
            if(x>a)
                cnt++;
            n--; 
        }
        cout<<cnt<<endl;
    }
    return 0;
}