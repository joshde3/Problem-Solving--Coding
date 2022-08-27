#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >>x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int ans=0;
        int flag=0;
        for (int i = n-1; i >=0; i--)
        {
            if(arr[i]<x){
                flag=1;
                ans=i;
                break;
            }
        }
        if(flag==0){
            cout<<0<<endl;
        }
        else{
            cout<<ans+1<<endl;
        }
        
    }
    return 0;
}