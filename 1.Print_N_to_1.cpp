#include<iostream>
//print N to 1 without backtrack
using namespace std;
void fun(int n){ 
    if(n==0)return;
    cout<<n<<endl;
    fun(n-1);

}
int main(){
    int n;
    cin>>n;
    fun(n);
}