#include <bits/stdc++.h>
#define ll long long
using namespace std;

// int findSum(string str)
//     {

//     	// Your code here
//     	string temp="";
//     	int flag=0;
//     	int sum=0;
//     	for(int i=0;i<str.length();i++){
//     	    if(int(str[i])>=48 and int(str[i])>=57){
//     	        if(flag==1){
//     	            sum+=stoi(temp);
//     	            temp="";
//     	            flag=0;
//     	        }
//     	        temp.push_back(str[i]);
//     	        continue;
//     	    }
//     	    flag=1;
// 			cout<<"int(str[i])>=48 : "<<(int(str[i])>=48) <<endl;
// 			cout<<"int(str[i])<=57 : "<<(int(str[i])<=57) <<endl;
// 			cout<<"int(str[i]) : "<<int(str[i]) <<endl;
// 			cout<<"str[i] : "<<str[i] <<endl;
// 			cout<<"i : "<<i <<endl;
// 			cout<<"temp : "<<temp <<endl;
// 			cout<<"sum : "<<sum <<endl<<endl;
//     	}
//     	return sum;
//     }

class Solution
{
public:
	vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows);
        // result[0][0]=1;
        for(int i=0;i<numRows;i++){
            result[i].resize(i+1);
            result[i][0]=result[i][i]=1;
            for(int j=1;j<i;j++){
                result[i][j]=result[i-1][j-1]+result[i-1][j];
            }
        }

		// for(int k=0;k<result.size();k++){
		// 	for(int y=0;y<result[k].size();y++){
		// 		cout<<result[k][y]<<" ";
		// 	}
		// 	cout<<endl;
		// }
        return result;
    }
};

void f(int n,int k=1){
	if(n==0) return;
	cout<<k<<" ";
	f(n-1,k+1);
	// cout<<n<<" ";
}

int fact(int n, int val=1){
	if(n==0) return val;	return fact(n-1,val*n);
}

int sum(int n,int k=0){
	if (n==0) return k;
	return sum((n/10),(n%10)+k);
}
void printSub(string s, string curr="",int i=0){
	if(i==s.length()){
		cout<<curr<<" ";
		return;
	} 
	printSub(s,curr,i+1);
	printSub(s,curr+s[i],i+1);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	// Solution s;
	// vector<vector<int>> he=s.generate(5);
	// for(auto x:he){
	// 	for(auto y:x){
	// 		cout<<y<<" ";
	// 	}
	// 	cout<<endl;
	// }

	// cout<<sum(253);
	cout<<"start"<<endl;
	
	printSub("ABC");
	cout<<endl<<"end"<<endl;
	return 0;
}