#include<iostream>
#include<vector>

using namespace std;
 bool fun(string &s,int l){
    if(l>=s.size()/2)return true;
    if(s[l]!=s[s.size()-l-1])return false;
    return fun(s,l+1);
 }
int main(){
       string s;
       cout<<"Enter a string"<<endl;
       cin>>s;
       int r=s.size()-1;
       cout<< fun(s,0)<<endl;
    return 0;
}