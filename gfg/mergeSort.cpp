// //{ Driver Code Starts
// #include <stdio.h>
// #include <bits/stdc++.h>
// using namespace std;



// /* Function to print an array */
// void printArray(int arr[], int size)
// {
//     int i;
//     for (i=0; i < size; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }


// // } Driver Code Ends
// class Solution
// {
//     public:
//     // void merge(int arr[], int l, int m, int r)
//     {
//          // Your code here
//         int s1=m-l+1,s2=r-m;
//         int left[s1],right[s2];
//         for(int i=0;i<s1;i++){
//             left[i]=arr[l+i];
//         }
//         for(int j=0;j<s2;j++){
//             right[j]=arr[m+1+j];
//         }
//         int i=0,j=0;
//         int k=l;

//         while(i<s1 and j<s2){
//             if(left[i]<right[j]){
//                 arr[k]=left[i++];
//                 k++;
//             }
//             else {
//                 arr[k]=right[j++];
//                 k++;
//             }
//         }
//         while(i<s1){
//             arr[k]=left[i++];
//             k++;
//         }
//         while(j<s2){
//             arr[k]=right[j++];
//             k++;
//         }
//     }         
     
            
// void mergeSort(int arr[], int l, int r)
//     {
//         //code here
//         if(r>l) {
//             int mid=l+(r-l)/2;
//             mergeSort(arr,l,mid);
//             mergeSort(arr,mid+1,r);
//             merge(arr,l,mid,r);
//         }
//     }
// };

// //{ Driver Code Starts.


// int main()
// {
//     // int n,T,i;

//     // scanf("%d",&T);
    
//     // scanf("%d",&n);
//     // int arr[n+1];
//     // for(i=0;i<n;i++)
//     //   scanf("%d",&arr[i]);

//     int arr[8]={30,10,18,3,2,16,50,1};

//     Solution ob;
//     ob.mergeSort(arr, 0, 7);
//     printArray(arr, 8);
    
//     return 0;
// }
// // } Driver Code Ends



// Trying after two years
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int l, int m, int h){
    int m1 = l;
    int m2 = m+1;
    vector<int> ans;
    while(m1<=m && m2<=h){
        if(arr[m1]>=arr[m2]){
            ans.push_back(arr[m2]);
            m2++;
        }
        else{
            ans.push_back(arr[m1]);
            m1++;
        }
    }
    while(m1<=m) {
        ans.push_back(arr[m1]);
            m1++;
    }
    while(m2<=h) {
        ans.push_back(arr[m2]);
            m2++;
    }

    // cout<<"Final answer : "<<endl;
    // cout<<"ans.size() : "<<ans.size()<<endl;
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    // cout<<endl;
    for(int i = l;i<=h;i++){
        arr[i]=ans[i-l];
    }
    // cout<<"arr.size() : "<<arr.size()<<endl;
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // } 
    // cout<<endl;

}
void mergeSort(vector<int>& arr, int l, int h) {
    if(l>=h) return;
    int m = (l+h)/2;
    cout<<"l is : "<<l<<endl;
    cout<<"h is : "<<h<<endl;
    cout<<"m is : "<<m<<endl;
    mergeSort(arr, l, m);
    mergeSort(arr, m+1, h);
    merge(arr, l, m, h);
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
    mergeSort(arr, 0, arr.size()-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}