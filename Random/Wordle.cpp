#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s,t;
        cin>>s>>t;
        string m="";
        for (int i = 0; i < 5; i++)
        {
            if(s[i]==t[i]){
                m.push_back('G');
            }
            else m.push_back('B');
        }
        cout<<m<<endl;
        
    }
    return 0;
}