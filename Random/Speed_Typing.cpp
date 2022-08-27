#include <bits/stdc++.h>
#define ll long long
using namespace std;



int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();
 
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        int j;
 
        /* For current index i, check for
 pattern match */
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return i;
    }
 
    return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    int ans;
    for(int i=1;i<=t;i++){
        string s1,s2;
        cin >> s1 >> s2;

        // int ans=isSubstring(s1,s2);
        // int l1=s1.length(); 
        // int l2=s2.length();
        // for(int i=0;i<l2-l1;i++){
        //     int j;
        //     for (int j = 0; j < l1; j++)
        //     {
        //         if(s2[i+j]!=s1[j]){
        //             break;
        //         }    
        //     }
        //     if(j==l1){
        //         ans=i;
        //     }

        // }
        // ans=(-1);




int M = s1.length();
    int N = s2.length();
 
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        int j;
 
        /* For current index i, check for
 pattern match */
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            ans=i;
        else ans=(-1);

    }
 
    


















        if(ans==(-1)){
            cout<<"Case #"<<i<<": "<<"IMPOSSIBLE"<<endl;
        }
        else{
            ans=s2.length()-s1.length();
            cout<<"Case #"<<i<<": "<<ans<<endl;
        }
    }
    return 0;
}