#include<iostream>
#include<vector>

using namespace std;
void allsubset(vector<int>&nums,int i,int n,vector<vector<int>>&ans,vector<int>&temp){
    if(i>=n){
        ans.push_back(temp);
        return;
    }
    //take 
    temp.push_back(nums[i]);
    allsubset(nums,i+1,n,ans,temp);
    temp.pop_back();
    //nottake
    allsubset(nums,i+1,n,ans,temp);
}
 
int main(){
     vector<int>arr;
     int n;
     cout<<"enter the size of the array "<<endl;
     cin>>n;

     for(int i=0;i<n;i++){
        cout<<"enter "<<i+1<< "th value ";
        int x;
        cin>>x;
        arr.push_back(x);
     }
     vector<vector<int>>ans;
     vector<int>temp;
      allsubset(arr,0,n,ans,temp);
      for(auto in:ans){
        for(auto i:in){
            cout<<i<<" ";
        }
        cout<<endl;
      }
    return 0;
}