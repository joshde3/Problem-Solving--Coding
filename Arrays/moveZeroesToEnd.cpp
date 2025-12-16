#include<bits/stdc++.h>
using namespace std;


void moveZeroesToEnd(vector<int>& arr){

    //brute
    // int n = arr.size();
    // vector<int> temp;
    // int i = 0; 
    // while(i<n){
    //     if(arr[i]!=0) temp.push_back(arr[i]);
    //     i++;
    // }

    // for(int i =0;i<temp.size();i++){
    //     arr[i]=temp[i];
    // }

    // for(int i = temp.size();i<n;i++){
    //     arr[i]=0;
    // }





    // optimal
    int n = arr.size();
    int j = 0;
    while(j< n && arr[j]!=0) j++;

    if(j<n){
        int i = j+1;
        while(i<n){
            if(arr[i]!=0){
                swap(arr[i],arr[j]);
                j++;
            }
            i++;
        }
    }   
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
    moveZeroesToEnd(arr);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}