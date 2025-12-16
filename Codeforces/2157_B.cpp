#include<bits/stdc++.h>
using namespace std;


string expansionPlan(int x, int y, string s, int n) {
    int a=0, b=0;
    x=abs(x);y=abs(y);
    for(int i=0;i<n;i++){
        if(s[i]=='4'){
            a++;
        }
        else{
            a++;b++;
        }
    }
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
    if(a<=x && b<=y ){
        return "YES";
    }
    else return "NO";
        
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int x,y;
        cin>>x;cin>>y;
        string s;
        cin>>s;
        // cout<<s<<endl;
        // vector<int> arr;
        // for(int i=0;i<n;i++){
        //     int temp;
        //     cin>>temp;
        //     arr.push_back(temp);
        // }
        cout<<expansionPlan(x, y, s,n);
        cout<<endl;
        cout<<endl;
        // for(int i:arr) cout<<i<<" ";

    }
    
    // for(int i=0;i<res.size();i++){
    //     cout<<res[i]<<" ";
    // }
    
    
    return 0;
}