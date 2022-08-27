#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct MyHash{
    int bucket;
    list<int> *table;
    MyHash (int m){
        bucket=m;
        table=new list<int>[m];
    }
    bool search(int key){
        int i=key%bucket;
        for(auto x : table[i]){
            if(x==key) return true;
        }
        return false;
    }
    void insert(int key){
        int m=key%bucket;
        table[m].push_back(key);
    }
    void remove(int key){
        int m=key%bucket;
        table[m].remove(key);
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        
    }
    return 0;
}