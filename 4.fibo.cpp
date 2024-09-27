#include<iostream>
#include<vector>
using namespace std;
//fibonacci number 
int fibo(int n){
  if(n<=1)return n;
  return fibo(n-1)+fibo(n-2);
}
int main(){
       ///// 0 1 1 2 3 5 8  13
       //printing the series of fibonacii;
       int n;
       cin>>n;
       cout<< fibo(n);
    return 0;
}