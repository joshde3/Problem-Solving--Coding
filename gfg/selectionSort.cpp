#include <bits/stdc++.h>
#define ll long long
using namespace std;

void selectionSort(vector<int> arr, int n){
    for(int i=0;i<n-1;i++){
        int min_ind=i;
        for(int j=i+1;j<n;j++){
            if(arr[min_ind]>arr[j]) min_ind=j;
        }
        swap(arr[i],arr[min_ind]);
    }
    for(auto x:arr){
        cout<<x<<" ";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t;
    // cin >> t;
    vector<int> arr={10,5,8,20,2,18};
    selectionSort(arr,arr.size());
    return 0;
}