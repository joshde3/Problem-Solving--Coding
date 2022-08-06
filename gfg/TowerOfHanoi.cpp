//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    void toh(int N, char from, char to, char aux) {
        if(N==1){
            cout<<"move disk "<<1<<" from rod "<<from<<" to rod "<<to<<endl;
            return;
        }
        // Your code here
        toh(N-1,from,aux,to);
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
        toh(N-1,aux,to,from);
        // return (pow(2,N)-1);
        // return (pow(2,N)-1);
    }

};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        ob.toh(N,'A','C','B');
    }
    return 0;
}


//Position this line where user code will be pasted.
// } Driver Code Ends