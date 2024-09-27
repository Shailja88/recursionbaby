//reverse array;
#include<iostream>
#include<vector>
using namespace std;
 void fun(vector<int>&arr,int l,int r){
    if(l>=r)return;
    swap(arr[l],arr[r]);
    fun(arr,l+1,r-1);
 }
int main(){
    vector<int>arr{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int n=arr.size();
    fun(arr,0,n-1);
    for(auto in:arr){
        cout<<in<<" ";
    }
    cout<<endl;
    return 0;
}