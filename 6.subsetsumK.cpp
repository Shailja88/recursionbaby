#include<iostream>
#include<vector>
using namespace std;
bool subsetsumk(vector<int>&nums,vector<int>&temp,int i,int n,int sum,int k){
    if(i>=n){
        if(sum==k) return true;
        return false;
    }
    sum+=nums[i];
    temp.push_back(nums[i]);
    if( subsetsumk(nums,temp,i+1,n,sum,k)==true)return true;
    sum-=nums[i];
    temp.pop_back();
    if(subsetsumk(nums,temp,i+1,n,sum,k)==true)return true;
    return false;

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
    // vector<vector<int>>ans;
    vector<int>temp;
    int sum=0;
    subsetsumk(nums,temp,0,n,sum,k);
    for(auto in:temp){
        
            cout<<in<<" ";
        
        // cout<<endl;
    }
    return 0;
}