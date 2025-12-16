#include<bits/stdc++.h>
using namespace std;


int getSingleElement(vector<int>& arr){
    //Write your code here.
    //brute will be to count the elements 
    //better will be to use hashing
    //optimal
    int xor1 = 0;
    for(int x:arr){
        xor1 = xor1 ^ x;
    }
    return xor1;
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
        int res = getSingleElement(arr);
        cout<<"single element is  "<<res <<endl;

    }
    
    // for(int i=0;i<res.size();i++){
    //     cout<<res[i]<<" ";
    // }
    
    
    return 0;
}