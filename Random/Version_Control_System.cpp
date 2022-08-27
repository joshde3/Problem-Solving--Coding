#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> a(m), b(k);
        for (int i = 0; i < m; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < k; i++)
        {
            cin>>b[i];
        }
        int cnt=0;
        int cnt1=0;
        for (int i = 1; i <=n; i++){
            if(count(a.begin(),a.end(),i)==0){
                if(count(b.begin(),b.end(),i)==0){
                    cnt1++;
                }
            }
            if(count(a.begin(),a.end(),i)){
                if(count(b.begin(),b.end(),i)){
                    cnt++;
                }
            }
        }
        cout<<cnt<<" " <<cnt1<<endl;
    }
    return 0;
}