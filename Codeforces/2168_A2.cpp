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
            ll temp;
            cin>>temp;
            arr.push_back(temp);
            string temps = to_string(temp);
            // cout<<"temps: "<<temps<<endl;
            for(char ch :temps){
                // cout<<"ch: "<<ch<<endl;
                // cout<<"temp: "<<temp<<endl;
                char temp1 = ch+'0'+1;
                // cout<<"encoded value: "<<temp1<<" ";
                s+=temp1;
                // cout<<endl;
            }
            s+='k';
            // cout<<endl; 
        }
        cout<<s<<endl;
    }
    else{   
        string s;
        cin>>s;
        int cnt =0;
        vector<ll> ans;
        string temp="";
        for(int i =0;i<s.size();i++){
            if(s[i]=='k'){
                // cout<<"temp: "<<temp<<endl;
                ans.push_back(stoll(temp));
                temp="";
                cnt++;
            }
            else{
                char ch = s[i]-'0'-1;
                // cout<<"ch: "<<ch<<endl;
                temp+=ch;
            }
        }
        cout<<ans.size()<<endl;
        for(auto x:ans){
            cout<<x<<" ";
        }



    }

    
    return 0;
}