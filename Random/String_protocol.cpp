#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int time=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]==s[i+1]){
                time++;
                i++;
            }
            else{
                time++;
            }
            // cout<<time<<" ";
        }
        // cout << endl ;
        cout << time << endl;
        
    }
    return 0;
}