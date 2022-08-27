#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 1; i <=t; ++i)
    {
        int n,m;
        cin>>n>>m;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        // for(auto x: arr){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        long double ans=0;
        int cnt=m-1;
        int end=n-1;
        while(cnt>0){
            ans+=arr[end];
            cnt--;
            end--;
        }
        // for(int i=n-1;i>=0;i--){
        //     if(cnt==(m-1)){
        //         break;
        //     }
        //     ans+=arr[i];
        //     cnt++;
        // }
        int edge=end+1 ;
        long double median=0;
        if(edge%2){
            ans+=arr[edge/2];
            // median+=0.0;
        }
        else{
            median=(arr[edge/2]+arr[(edge/2)-1]);
            // cout<<"arr[edge/2] : "<<arr[edge/2]<<endl;
            // cout<<"arr[(edge/2)-1] : "<<arr[(edge/2)-1]<<endl;
            // cout<<"(arr[edge/2]+arr[(edge/2)-1]) : "<<(arr[edge/2]+arr[(edge/2)-1])<<endl;
            // cout<<"(arr[edge/2]+arr[(edge/2)-1])/2 : "<<(arr[edge/2]+arr[(edge/2)-1])/2.0<<endl;
            ans+=((double)median/2);
        }
        // cout<<median<<endl;
        // ans+=median;
 
        cout<<"Case #"<<i<<": "<<fixed<<setprecision(6)<<ans<<endl;
    }
    
    return 0;
}