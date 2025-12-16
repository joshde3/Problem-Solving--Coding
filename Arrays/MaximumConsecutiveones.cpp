#include<bits/stdc++.h>
using namespace std;


int consecutiveOnes(vector<int>& arr){
    //Write your code here.
    //your way
    // too much time will take to think brute and better approaches moving to optimal
    int n = arr.size();
    int cnt =0,maxi =-1;
    for(int i =0;i<=n-1;i++){
        if(arr[i]==1) cnt++;
        else {
            maxi = max(maxi, cnt);
            cnt = 0;
        }
    }
    return maxi;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        int res = consecutiveOnes(arr);
        cout<<"length of consecutiveOnes are  "<<res <<endl;

    }
    
    // for(int i=0;i<res.size();i++){
    //     cout<<res[i]<<" ";
    // }
    
    
    return 0;
}