#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int numberOfSteps(int num) {
    int k;
    while(num>=0){
        if(num%2==0){
            (num>>1);
            cout<<num;
        }
        else {
            num-=1;
        }
        cout<<num<<endl;
        k++;
        if(num==0){
            break;
        }
    }
    return k;
}



int main(){
   int n;
   cin>>n;
   cout<<numberOfSteps(n); 
   
    
    return 0;
}