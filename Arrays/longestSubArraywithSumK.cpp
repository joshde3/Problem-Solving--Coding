#include<bits/stdc++.h>
using namespace std;


int longestSubarrayWithSumK(vector<int>& arr, int k){
    //Write your code here.
    //brute will be to count the elements 
    //better will be to use hashing
    // unordered_map<int, int> mpp;
    // int n =arr.size(), sum =0, maxi =0;
    // for(int i = 0;i<n;i++){
    //     sum=sum+arr[i];
    //     if(sum==k){
    //         maxi = max(i+1, maxi);
    //     }
    //     auto it = mpp.find(sum-k);
    //     if(it!=mpp.end()){
    //         int temp = i-it->second;
    //         maxi = max(temp, maxi);
    //     }
    //     if(mpp.find(sum) == mpp.end()){
    //         mpp[sum]=i;
    //     }
    // }
    // return maxi;
    //optimal
    
    int i=0,j=0,tsum=0,cnt=0,ans=0;
    int n = arr.size();
    while(j<n){
        while(tsum>k && i<=j){
            tsum-=arr[i];
            i++;
        }
        if(tsum==k){
            ans= max(ans,j-i+1);
        }
        j++;
        if(j<n){
            tsum+=arr[j];
        }
    }
    return ans;
}

int main() {
    // int t;
    // cin>>t;
    // while(t--){
        int n;
        cin >> n;
        int k;
        cin>>k;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        int res = longestSubarrayWithSumK(arr,k);
        cout<<"longestSubarrayWithSumK is "<<res <<endl;

    // }
    
    // for(int i=0;i<res.size();i++){
    //     cout<<res[i]<<" ";
    // }
    
    
    return 0;
}