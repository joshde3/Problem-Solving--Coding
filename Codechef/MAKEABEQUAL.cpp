#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        long long b[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        for(long long j=0;j<n;j++){
            cin>>b[j];
        }
        long long diffa=0,diffb=0;
        for(long long j=0;j<n;j++){
            if(a[j]>b[j]){
                diffa+=abs(a[j]-b[j]);
            }
            else if(a[j]<b[j]){
                diffb+=abs(a[j]-b[j]);
            }
        }
        if(diffb==diffa) cout<<diffa<<endl;
        else cout<<(-1)<<endl;
    }
	return 0;
}
