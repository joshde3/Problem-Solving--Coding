// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;
int SecondLargest(int arr[], int n) ;
void MAZTE(int arr[], int n) ; //move all zeroes to end
void RAA(int arr[],int n) ; //Reverse an array
void LRAABO(int arr[],int n) ;//left rotate an array by one

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        // cout << SecondLargest(a, n) << endl;
        LRAABO(a,n);
    }
    return 0;
}// } Driver Code Ends

void LRAABO(int arr[],int n) {
    int t=3;
    // while(t>0){
    //     int first=arr[0];
    //     for(int i=1;i<n;i++){
    //         arr[i-1]=arr[i];
    //     }
    //     arr[n-1]=first;
    //     t--;
    // }

    t=t%n;
    reverse(arr,arr+t);
    reverse(arr+t,arr+n);
    reverse(arr,arr+n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void RAA(int arr[],int n) {
    int lo=0,hi=n-1;
    while(lo<hi){
        swap(arr[lo],arr[hi]);
        lo++;
        hi--;
    }


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void MAZTE(int arr[], int n) {
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

pair<long long, long long> getMinMax(long long a[], int n) {
    long long maxx=0, minn=LLONG_MAX;
    for (int i=0;i<n;i++){
        if(a[i]>maxx){
            maxx=a[i];
        }
        if(a[i]<minn){
            minn=a[i];
        }
    }
    pair<long long,long long> p1;
    p1.first=minn;
    p1.second=maxx;
    return p1;
    
}

int SecondLargest(int arr[], int n) {
    int maxx=arr[0];
    int index=0;
    for (int i = 0 ; i < n ; i++) {
        if(maxx<arr[i]) {
            maxx=arr[i];
            index=i;
        }
    }
    int maxinf=maxx;
    maxx = 0;
    int iol = index;
    bool flag=true;
    for (int i = 0 ; i < n ; i++) {
        if(i==iol) continue;
        if(arr[i]==maxinf) continue;
        flag=false;
        if(maxx<arr[i]) {
            maxx=arr[i];
            index=i;
        }
    }
    if (flag) return (-1);
    return index;
}

