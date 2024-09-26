//  print N to 1
#include <iostream>
using namespace std;
void fun(int n){
    if(n<=0)return ;
    cout<<n<<endl;
    return fun(n-1);
}
int main() {
    // Write C++ code here
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
       fun(n);

    return 0;
}
