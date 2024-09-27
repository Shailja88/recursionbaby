#include<iostream>
#include<vector>
using namespace std;
int subsetsumk(vector<int>&nums,int i,int n,int &sum,int k){
    if(i>=n){
        if(sum==k)return 1;
         return 0;
    }
   sum+=nums[i];
   int x=subsetsumk(nums,i+1,n,sum,k);
   sum-=nums[i];
   int y=subsetsumk(nums,i+1,n,sum,k);
   return x+y;
 
}
int main(){
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int x;
        cout<<"Enter "<<i+1<<"th value ";
         cin>>x;
         nums.push_back(x);
    }
    cout<<"Enter the value of k "<<endl;
    int k;
    cin>>k;
    int sum=0;
    cout<<subsetsumk(nums,0,n,sum,k);
   
    return 0;
}