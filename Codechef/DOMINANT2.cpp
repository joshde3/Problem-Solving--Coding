#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        unordered_map<int, int> m; 
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(m.find(arr[i])==m.end()){
                m[arr[i]]=1;
            }
            else m[arr[i]]++;
        }
        vector<int> cnt;
        for(auto x:m){
            cnt.push_back(x.second);
        }
        sort(cnt.begin(),cnt.end(),greater<int>());
        if(cnt[0]==cnt[1]) cout<<"NO\n";
        else cout<<"YES\n";
    }
	return 0;
}
