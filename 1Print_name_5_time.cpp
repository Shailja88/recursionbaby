#include<iostream>
using namespace std;
void fun(int n){
    if(n>5)return ;
    cout<<"Shailja"<<endl;
    n++;
    fun(n);
}
int main(){
    fun(1);
}