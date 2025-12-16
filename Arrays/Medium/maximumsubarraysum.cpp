#include<bits/stdc++.h>
using namespace std;


int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    int maxi = INT_MIN, curr_sum=0;
    for(int i =0;i<n;i++){
        // cout<<"cuur_sum1: "<<curr_sum<<endl;
        curr_sum += nums[i];
        maxi = max(curr_sum,maxi);
        // cout<<"cuur_sum3: "<<curr_sum<<endl;
        if(curr_sum<0) curr_sum=0;
        // cout<<"cuur_sum4: "<<curr_sum<<endl;
    }
    return maxi;
        
}

void maxSubArray1(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int maxi = INT_MIN, curr_sum=0,start =-1,ansStart=-1,ansEnd=-1;
        for(int i =0;i<n;i++){
            if(curr_sum==0) start =i;
        // cout<<"cuur_sum1: "<<curr_sum<<endl;
            curr_sum += nums[i];
            if(curr_sum>maxi){
                maxi=curr_sum;
                ansStart= start, ansEnd=i;
            }
            // maxi = max(curr_sum,maxi);
        // cout<<"cuur_sum3: "<<curr_sum<<endl;
            if(curr_sum<0) {
                curr_sum=0;   
            }
            // cout<<"i: "<<i<<endl;
            // cout<<"ansStart: "<<ansStart<<endl;
            // cout<<"ansEnd: "<<ansEnd<<endl;

        // cout<<"cuur_sum4: "<<curr_sum<<endl;
        }
        for(int j=ansStart;j<=ansEnd;j++){
            ans.push_back(nums[j]);
        }
        // ans.insert(nums.begin()+ansStart, nums.begin()+ansEnd);
        for(int x:ans){
            cout<<x<<" ";
        }

        
}




int main() {
    // int t;
    // cin>>t;
    // while(t--){
        int n;
        cin >> n;
        // int k;
        // cin>>k;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        maxSubArray1(arr);
        // cout<<"max subarray sum is "<<endl<<maxSubArray(arr);
        // for(int i:arr) cout<<i<<" ";

    // }
    
    // for(int i=0;i<res.size();i++){
    //     cout<<res[i]<<" ";
    // }
    
    
    return 0;
}