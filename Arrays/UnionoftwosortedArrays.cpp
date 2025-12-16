#include<bits/stdc++.h>
using namespace std;


vector<int> sortedArray(vector<int> a, vector<int> b){
    int i = 0;
    int j = 0;
    int m = a.size();
    int n = b.size();
    vector<int> res;
    int lastElementInserted = -1;
    while(i<m && j<n){
        // cout<<"i : "<<i<<endl;
        // cout<<"j : "<<j<<endl;
        // cout<<"a[i] : "<<a[i]<<endl;
        // cout<<"b[j] : "<<b[j]<<endl;
        if(a[i]<=b[j]){
            if(lastElementInserted!=a[i]){
                res.push_back(a[i]);
                lastElementInserted = a[i];
            }
            i++;
        }
        else{
            if(lastElementInserted!=b[j]){
                res.push_back(b[j]);
                lastElementInserted = b[j];
            }
            j++;
        }
    }
    cout<<endl;
    while(i<m){
        if(lastElementInserted!=a[i]){
            res.push_back(a[i]);
            lastElementInserted = a[i];
        }
        i++;
    }
    
    while(j<n){
        if(lastElementInserted!=b[j]){
            res.push_back(b[j]);
            lastElementInserted = b[j];
        }
        j++;
    }
    return res;

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

    int o;
    cin >> o;
    vector<int> arr1;
    for(int i=0;i<o;i++){
        int temp;
        cin>>temp;
        arr1.push_back(temp);
    }
    vector<int> res = sortedArray(arr,arr1);

    
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    
    
    return 0;
}