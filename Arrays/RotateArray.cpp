#include<bits/stdc++.h>
using namespace std;

void RotateArray(vector<int>& arr, int k){
    //my approach - brute
    // int n =arr.size();
    // while(k--){
    //     int start= arr[0];
    //     for(int i =1;i<n;i++) arr[i-1] = arr[i];
    //     arr[n-1] =start;
    // }

    //brute force approach 2
    // int n = arr.size();
    // vector<int> temp ;
    // for(int i = 0;i<k;i++){
    //     temp.push_back(arr[i]);
    // }
    // for(int i = 0;i<(n-k);i++){
    //     arr[i]=arr[i+k];
    // }
    // for(int i = n-k;i<n;i++){
    //     arr[i] = temp[i-(n-k)];
    // }

    //optimal aproach
    int n = arr.size();
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());

}

void rightRotateArray(vector<int>& arr, int k){
    //my approach - brute
    // int n =arr.size();
    // while(k--){
    //     int start= arr[0];
    //     for(int i =1;i<n;i++) arr[i-1] = arr[i];
    //     arr[n-1] =start;
    // }

    //brute force approach 2
    // int n = arr.size();
    // vector<int> temp;
    // for(int i = n-k;i<n;i++){
    //     temp.push_back(arr[i]);
    // }
    // for(int i = n-1;i>=k;i--){
    //     arr[i]=arr[i-k];
    // }
    // for(int i = 0;i<k;i++){
    //     arr[i] = temp[i];
    // }

    //optimal aproach
    int n = arr.size();
    k = k%n;
    reverse(arr.begin(),arr.begin()+(n-k));
    reverse(arr.begin()+(n-k),arr.end());
    reverse(arr.begin(),arr.end());

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
    int k;
    cin>>k;
    rightRotateArray(arr,k);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}