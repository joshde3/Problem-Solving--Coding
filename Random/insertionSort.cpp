#include<bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector<int>& nums) {
    int n = nums.size();
    for(int i=0;i<=n-1;i++){
        int j =i;
        while(j>0 && nums[j-1]>nums[j]){
            swap(nums[j], nums[j-1]);
            j--;
        }
    }
    return nums;

}

void insertionSortUsingRecursion(vector<int>& arr, int j, int n){
    int k = j;
    if(k>=n) return;
    while(k>0 && arr[k]<arr[k-1]){
        swap(arr[k],arr[k-1]);
        k--;
    }
    insertionSortUsingRecursion(arr, j+1,n);
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
    // insertionSort(arr);
    insertionSortUsingRecursion(arr, 0, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}