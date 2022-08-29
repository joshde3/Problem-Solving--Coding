#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0;i < n; i++) {
            cin >> arr[i];
        }
        int cnt = 0;
        int max_so_far = -1;
        for (int i = 0;i<n;i++) {
            if(max_so_far<arr[i]){
                max_so_far=arr[i];
                if(i<n-1 and arr[i+1]<arr[i]){
                    cnt++;
                    continue;
                }
                if(i==n-1) cnt++;
            }
        }
        cout<<"Case #"<<i<<": "<<cnt<<endl;
    }
    
    return 0;
}