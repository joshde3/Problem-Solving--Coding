#include<bits/stdc++.h>
using namespace std;


vector<int> intersectionOfTwoSortedArrays(vector<int> a, vector<int> b){
    // brute
    // vector<int> visited(b.size());
    // vector<int> result;
    // for(int i = 0;i < a.size();i++){
    //     for(int j =0;j<b.size();j++){
    //         if(a[i]==b[j] && visited[j]!=1){
    //             result.push_back(b[j]);
    //             visited[j]=1;
    //             break;
    //         }
    //         if(b[j]>a[i]) break;

    //     }
    // }
    // return result;

    //optimal
    int m = a.size();
    int n = b.size();
    int i = 0;
    int j =0;
    vector<int> result;
    while(i<m &&j<n){
        if(a[i]==b[j]){
            result.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i]>b[j]) j++;
        else i++;
    }
    return result;

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
    vector<int> res = intersectionOfTwoSortedArrays(arr,arr1);

    
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    
    
    return 0;
}