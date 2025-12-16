#include<bits/stdc++.h>
using namespace std;


void sortZeroesOnesAndTwos(vector<int> &arr){
    //brute
    // use merge sort

    //better
    // int cnt_0=0,cnt_1=0,cnt_2=0;
    // for(int x :arr){
    //     if(x==0) cnt_0++;
    //     else if(x==1) cnt_1++;
    //     else cnt_2++;
    // }
    // for(int i =0;i<cnt_0;i++){
    //     arr[i]=0;
    // }
    // for(int i =cnt_0;i<cnt_0+cnt_1;i++){
    //     arr[i]=1;
    // }
    // for(int i =cnt_0+cnt_1;i<arr.size();i++){
    //     arr[i]=2;
    // }

    //best
    int l=0,m=0,h=arr.size()-1;
    while(m<=h){
        if(arr[m]==0){
            swap(arr[m],arr[l]);
            m++;
            l++;
        }
        else if(arr[m]==1){
            m++;
        }
        else{
            swap(arr[m],arr[h]);
            h--;
        }
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
        sortZeroesOnesAndTwos(arr);
        for(int i:arr) cout<<i<<" ";

    // }
    
    // for(int i=0;i<res.size();i++){
    //     cout<<res[i]<<" ";
    // }
    
    
    return 0;
}