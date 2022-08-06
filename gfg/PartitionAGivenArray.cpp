#include <bits/stdc++.h>
#define ll long long
using namespace std;

void partition(int arr[],int k,int n){
    // int n=sizeof(arr)/sizeof(arr[0]);
    int key=arr[k];
    vector<int> left,right;
    for(int i=0;i<n;i++){
        if(arr[i]<key){
            left.push_back(arr[i]);
        }
        else right.push_back(arr[i]);
    }
    int i=0;
    for(int j=0;j<left.size();j++){
        arr[i++]=left[j];
    }
    arr[i++]=key;
    for(int j=0;j<right.size();j++){
        arr[i++]=right[j];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int arr[]={3,8,6,12,10,7};
    partition(arr,5,6);
    return 0;
}