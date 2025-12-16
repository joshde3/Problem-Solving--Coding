#include<bits/stdc++.h>
using namespace std;


int MissingNumber(vector<int> a){
    // brute
    // int n = a.size()+1;
    // for(int i = 1;i<=n;i++){
    //     int numberFound = 0;
    //     for(int j =0;j<a.size();j++){
    //         if(i==a[j]){
    //             numberFound = 1;
    //             break;
    //         }
    //     }
    //     if (numberFound ==0) return i;
    // }

    //better (hashing)
    // int n = a.size()+1;
    // vector<int> hashArray(a.size()+1);
    // for(int i =0;i<n-1;i++){
    //     hashArray[a[i]] = 1;
    // }
    // for(int i=1;i<=n;i++){
    //     if(hashArray[i]==0) return i;
    // }

    //optimal two solutions
    int n = a.size()+1;
    // int sumn = (n*(n+1))/2;
    // int sum = 0;
    // for( int i: a){
    //     sum+=i;
    // }
    // return sumn-sum;

    //xor method;
    int xor2=0, xor1=0;
    for(int i =0;i<a.size();i++)
    {
        xor2 = xor2 ^ a[i];
        xor1 = xor1 ^ i+1;
    }
    xor1 = xor1 ^ (a.size()+1);
    return xor1 ^ xor2;
    

}

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    
    int res = MissingNumber(arr);
    cout<<"MIssing Number is  "<<res <<endl;
    
    // for(int i=0;i<res.size();i++){
    //     cout<<res[i]<<" ";
    // }
    
    
    return 0;
}