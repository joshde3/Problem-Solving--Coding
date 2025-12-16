#include<bits/stdc++.h>
using namespace std;

int RemoveDuplicates(vector<int>& arr){
    int n = arr.size();
    int i = 0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
        
    }
    return i+1;
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
    int sLargest = RemoveDuplicates(arr);
    cout<< "Number of unique elements is/are "<<sLargest<<endl;
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}