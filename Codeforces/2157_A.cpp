#include<bits/stdc++.h>
using namespace std;


int dEquil(vector<int>& arr) {
    unordered_map<int,int> mpp;
    int cost=0;
    for(int x:arr){
        mpp[x]++;
    }
    for(auto x:mpp){
        if(x.first<x.second){
            cost+=(x.second-x.first);
        }
        else if(x.first>x.second){
            cost+=x.second;
        }
    }
    return cost;

        
}

int main() {
    int t;
    cin>>t;
    while(t--){
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
        cout<<dEquil(arr);
        cout<<endl;
        // for(int i:arr) cout<<i<<" ";

    }
    
    // for(int i=0;i<res.size();i++){
    //     cout<<res[i]<<" ";
    // }
    
    
    return 0;
}