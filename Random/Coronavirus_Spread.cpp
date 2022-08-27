#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        vector<int> b;
        // for(auto x:a){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        
        for (int i = 0; i < n-1; i++)
        {
            b.push_back(a[i+1]-a[i]);
        }
        
        // sort(b.begin(),b.end());
        // int cnt=0;
        vector<int> c;
        // int flag=0;
        // for(int i = 0; i < b.size(); i++){
        //     if(b[i]>2){
        //         flag=1;
        //         c.push_back(cnt);
        //         cnt=0;
        //     }
        //     cnt++;
        // }
        // if(flag==0){
        //     c.push_back(a.size());
        //     c.push_back(a.size());
        // }
        int cnt=1;

        for(auto x:b){
            if(x>2){
                c.push_back(cnt);
                cnt=1;
            }
            else cnt++;
        }
        c.push_back(cnt);
        sort(c.begin(),c.end());
        // for(auto x:b){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        // for(auto x:c){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        cout<<c[0]<<" "<<c[c.size()-1];
        // cout<<endl;
        cout<<endl;
    }
    return 0;
}