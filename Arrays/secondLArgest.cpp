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

int secondLargest(vector<int>& arr){

    //brute Force
    // sort and find the second largest TC NLogn +N
    // int n = arr.size();
    // quickSort(arr, 0, n-1);
    // int sLargest = arr[n-1];
    // for(int i = n-2;i>=0;i--){
    //     if(arr[i]!=arr[n-1]){
    //         sLargest = arr[i];
    //         break;
    //     }
    // }
    // return sLargest;

    //better approach
    // 2 passes, one to find the largest and the second to find the second largest TC 2*N

    // int n = arr.size();
    // int largest = arr[0];
    // for(int i =1;i<n;i++){
    //     largest = max(largest, arr[i]);
    // } 
    // int secondLargest = INT_MIN;
    // for(int i =1;i<n;i++){
    //     if(arr[i]>secondLargest && arr[i]<largest){
    //         secondLargest = arr[i];
    //     }
    // }
    // return secondLargest;

    //best approach tc N

    int n = arr.size();
    int largest = arr[0];
    int sLargest = INT_MIN;
    for(int i = 1;i<n;i++){
        if(arr[i]>largest){
            sLargest = largest;
            largest = arr[i];
        }
        else if(arr[i]>sLargest && arr[i]<largest){
            sLargest = arr[i];
        }
    }
    return sLargest;

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
    int sLargest = secondLargest(arr);
    cout<< "Second largest is "<<sLargest<<endl;
    
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    
    
    return 0;
}