#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 1;i <= t;i++){
        int n,m;
        cin >> n >> m;
        int sum=0;
        int temp;
        while(n--){
            cin>>temp;
            sum+=temp;
        }
        cout<<"Case #"<<i<<": "<<(sum%m)<<endl;
    }
    return 0;
}