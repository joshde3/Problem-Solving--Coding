#include <bits/stdc++.h>
#define ll long long
using namespace std;

int Bsearch(int arr[],int low, int high, int x){
    if(high<low) return -1;
    int mid=(low+high)/2;
    if(arr[mid]==x) return mid;
    if(arr[mid]<x){
        return Bsearch(arr,mid+1,high,x);
    }
    else return Bsearch(arr,low,mid-1,x);

}

struct Item{
    int value,weight;
    Item(int value,int weight){
        this->value=value;
        this->weight=weight;
    }
};

bool cmp(Item a,Item b){
    float r1=(double)a.value/(double)a.weight;
    float r2=(double)b.value/(double)b.weight;
    return r1>r2;
}

float fnapsack(int w,struct Item arr[],int n){
    sort(arr,arr+n,cmp);
    float curr_weight=0.0;
    float final_value=0.0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i].weight+curr_weight<=w){
            curr_weight+=arr[i].weight;
            final_value+=arr[i].value;
        }
        else{
            float remain=w-curr_weight;
            final_value+=((double)remain/(double)arr[i].weight)*((double)arr[i].value);
            break;
        }
    }
    return final_value;
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    // Item arr[]={{25,18},{24,15},{15,20}};
    // int weight=20;
    // int n=sizeof(arr)/sizeof(arr[0]);
    // cout<<fnapsack(weight,arr,n);

    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<Bsearch(arr,0,n-1,20);
    return 0;
}