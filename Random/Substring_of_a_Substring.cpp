#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        char c0=s[0];
        char c1=s[s.length()-1];
        string ans="";
        vector<string> st;
        for (int i = 1; i < s.length(); i++)
        {
            if(s[i]==c0 || s[i]==c1){
                st.push_back(ans);
                ans="";
            }
            else {
                ans.push_back(s[i]);
            }
        }
        int mx=0;
        for (int i = 0; i < st.size(); i++)
        {
            if(mx<st[i].length()){
                mx=st[i].length();
            }
        }
        if(mx==0){
            cout<<(-1)<<endl;
        }
        else cout<<mx<<endl;
        
    }
    return 0;
}