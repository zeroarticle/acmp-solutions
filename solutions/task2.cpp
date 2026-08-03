#include <iostream>
using namespace std;
int main()
{
    int a;
    long long b;
    cin>>a;
    if(a>0){
        for(int i=1;i<=a;i++){
            b+=i;
        }
    }else{
        for(int i=1;i>=a;i--){
            b+=i;
        }
    }
    if(0==a){
        b=0;
    }
    cout<<b;
    return 0;
}
