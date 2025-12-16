#include<bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int>& nums) {
    int n = nums.size();
    for(int i=0;i<n-1;i++){
        int didSwapHappened =0;
        for (int j=0;j<n-i-1;j++){
            if (nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
                didSwapHappened =1;
            }
        }
        if(didSwapHappened ==0) break;
    }
    return nums;

}
//bubble sort using recursion

void bubbleSort(vector<int>& arr, int i , int j, int n) {
    if(i>=n || j>=n) return;
    if(arr[i]>arr[j]) swap(arr[i],arr[j]);
    bubbleSort(arr,i+1,j+1,n);
    

}

void sortusingRecursion(vector<int>& arr){
    int j = arr.size()-1;
    while(j>0){
        bubbleSort(arr,0,1,j);
        j--;
    }
}

void bubbleSortUsingRecursion(vector<int>& arr, int n){
    if(n==1) return;
    for(int i =0 ;i<n-1;i++){
        if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
    }
    bubbleSortUsingRecursion(arr,n-1);
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
    // bubbleSort(arr);
    // sortusingRecursion(arr);
    bubbleSortUsingRecursion(arr, arr.size());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}