#include<bits/stdc++.h>
using namespace std;


int majorityElement(vector<int>& arr) {

    //better
    // unordered_map<int, int> mpp;
    // for(int x:arr){
    //     // cout<<"x: "<<x<<endl;
    //     if(mpp.find(x)==mpp.end()){
    //         mpp[x]=1;
    //         // cout<<"mpp[x]: "<<mpp[x]<<endl;
    //     }
    //     else{
    //         mpp[x]++;
    //         // cout<<"mpp[x] doing + 1: "<<mpp[x]<<endl;
    //     }
    // }
    // for(auto x:mpp){
    //     // cout<<"first: "<<x.first<<" Second: "<<x.second<<" ";
    //     if(x.second>(arr.size()/2)) {
    //         return x.first;
    //     }
    // }
    // return -1;

    //best moore voting algo
    int cnt=0,el;
    int n = arr.size();
    for(int i =0;i<n;i++){
        if(cnt==0){
            cnt=1;
            el = arr[i];
        }
        else if (arr[i]!=el) cnt--;
        else cnt++;
    }
    return el;


        
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
        cout<<"majority element is "<<endl<<majorityElement(arr);
        // for(int i:arr) cout<<i<<" ";

    // }
    
    // for(int i=0;i<res.size();i++){
    //     cout<<res[i]<<" ";
    // }
    
    
    return 0;
}