//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
        int s1=m-l+1,s2=r-m;
        int left[s1],right[s2];
        for(int i=0;i<s1;i++){
            left[i]=arr[l+i];
        }
        for(int j=0;j<s2;j++){
            right[j]=arr[m+1+j];
        }
        int i=0,j=0;
        int k=l;

        while(i<s1 and j<s2){
            if(left[i]<right[j]){
                arr[k]=left[i++];
                k++;
            }
            else {
                arr[k]=right[j++];
                k++;
            }
        }
        while(i<s1){
            arr[k]=left[i++];
            k++;
        }
        while(j<s2){
            arr[k]=right[j++];
            k++;
        }
    }         
     
            
void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(r>l) {
            int mid=l+(r-l)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr,l,mid,r);
        }
    }
};

//{ Driver Code Starts.


int main()
{
    // int n,T,i;

    // scanf("%d",&T);
    
    // scanf("%d",&n);
    // int arr[n+1];
    // for(i=0;i<n;i++)
    //   scanf("%d",&arr[i]);

    int arr[8]={30,10,18,3,2,16,50,1};

    Solution ob;
    ob.mergeSort(arr, 0, 7);
    printArray(arr, 8);
    
    return 0;
}
// } Driver Code Ends