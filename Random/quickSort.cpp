#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int l, int h){
    int pivot = arr[l];
    int i = l;
    int j = h;
    while(i<j){
        while(i<h && arr[i]<=pivot){
            i++;
        }
        while(j>l && arr[j]>pivot){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[l],arr[j]);
    return j;
}

void quickSort(vector<int>& arr, int l, int h){
    if(l<h){
        int partitionIndex = partition(arr,l,h);
        quickSort(arr, l, partitionIndex-1);
        quickSort(arr, partitionIndex+1, h);
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
    quickSort(arr,0, n-1);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}