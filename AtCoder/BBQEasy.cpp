#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> l(2*n);
    for(int i=0;i<l.size();i++){
        cin>>l[i];
    }
    sort(l.begin(),l.end(),greater<int>());
    int sum=0;
    for(int j=0;j<=l.size()-1;j+=2){
        sum+=(min(l[j],l[j+1]));
    }
    cout<<sum<<endl;
    return 0;
}