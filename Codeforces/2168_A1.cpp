#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string run;
    cin>> run;

    if(run=="first"){
        int n;
        cin >> n;
        vector<int> arr;
        string s;
        for(int i =0;i<n;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
            char temp1 = (char)('a'+temp-1);
            s+=temp1;

        }
        cout<<s<<endl;
    }
    else{   
        string s;
        cin>>s;
        cout<<s.size()<<endl;
        for(int i =0;i<s.size();i++){
            int temp = s[i] - 'a' + 1;
            cout<<temp<<" ";
        }


    }

    
    return 0;
}