#include<bits/stdc++.h>
using namespace std;

vector<int> selectionSort(vector<int>& nums) {
    int n = nums.size();
    for(int i=0;i<n;i++){
        int index =-1;
        int mini = INT_MAX;
        for (int j=i;j<n;j++){
            if (mini>nums[j]){
                mini = nums[j];
                index = j;
            }
        }
        swap(nums[i],nums[index]);
    }
    return nums;

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
    selectionSort(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}