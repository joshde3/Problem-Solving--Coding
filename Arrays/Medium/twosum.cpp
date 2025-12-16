#include<bits/stdc++.h>
using namespace std;


vector<int> twoSum(vector<int> arr, int target){
    //Write your code here.
    //brute 
    // vector<int> res;
    // for(int i =0;i<arr.size();i++){
    //     for(int j=i+1;j<arr.size();j++){
    //         if((arr[i]+arr[j]) ==target){
    //             cout<<"i :"<<i<<endl;
    //             cout<<"j :"<<j<<endl;
    //             res.push_back(i);
    //             res.push_back(j);
                
    //         }
    //     }
    // }
    // return res;
    
    // better //best for returning indexes
    unordered_map<int, int> mpp;
        for(int i =0;i<arr.size();i++){
            int a = arr[i];
            int rem = target -a;
            if(mpp.find(rem)!=mpp.end()){
                return {mpp[rem], i};
            }
            mpp[a]=i;
        }
        return{-1,-1};

    //best for return "yes" and "no"
    vector<int> res;
    unordered_map<int, int> mpp;
    for(int i =0;i<arr.size();i++){
        mpp[arr[i]]=i;
    }
    sort(arr.begin(),arr.end());
    int l =0,h=arr.size()-1;
    while(l<h){
        if(arr[l]+arr[h]==target){
            res.push_back(mpp[arr[l]]);
            res.push_back(mpp[arr[h]]);
            break;
        }
        else if(arr[l]+arr[h]<target) l++;
        else h--;
    }
    return res;


    
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
        vector<int> res = twoSum(arr,k);
        for(int i:res) cout<<i<<" ";

    // }
    
    // for(int i=0;i<res.size();i++){
    //     cout<<res[i]<<" ";
    // }
    
    
    return 0;
}