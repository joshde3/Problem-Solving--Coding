#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long int a[n];
        for (long long int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        long long int altSum=0;
        for (long long int i = 0; i < n; i++)
        {
            a[i]=abs(a[i]);
            if(i%2){
                altSum-=a[i];
            }
            else altSum+=a[i];
        }
        // cout<<altSum<<endl;
        // for (long long int i = 0; i < n; i++)
        // {
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;
        long long int mx=0;
        for(long long int i=1;i<n;i+=2){
            mx=max(mx,a[i]);
        }
        long long int mn=INT_MAX;
        for(long long int i=0;i<n;i+=2){
            mn=min(mn,a[i]);
        }
        long long int sum=altSum+(2*(abs(mx)-abs(mn)));
        cout<<max(sum,altSum)<<endl;
        

        
        



    }
    return 0;
}