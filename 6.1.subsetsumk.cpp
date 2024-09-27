#include<iostream>
#include<vector>
//subset sum equals to k 
using namespace std;

void subsetsumk(vector<int>&nums,vector<vector<int>>&ans,vector<int>&temp,int i,int &sum,int n,int k){
    if(i>=n){
        if(sum==k){
            ans.push_back(temp);
        }
        return;
    }
    sum+=nums[i];
    temp.push_back(nums[i]);
    subsetsumk(nums,ans,temp,i+1,sum,n,k);
    sum-=nums[i];
    temp.pop_back();
    subsetsumk(nums,ans,temp,i+1,sum,n,k);
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
    vector<vector<int>>ans;
    vector<int>temp;
    int sum=0;
    subsetsumk(nums,ans,temp,0,sum,n,k);
    for(auto in:ans){
        for(auto i:in){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}