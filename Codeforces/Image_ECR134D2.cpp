#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        unordered_set<char> to;
        for(int i=0;i<2;i++){
            to.insert(s1[i]);
            to.insert(s2[i]);
        }
        cout<<to.size()-1<<endl;
    }
    return 0;
}