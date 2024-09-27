#include<iostream>
using namespace std;

int fun(int i){
    if(i<=0)return i;
    return i+fun(i-1);
}
int main(){
int n;
cout<<"enter value "<<endl;
cin>>n;
cout<< fun(n)<<endl;
}