#include <iostream>
using namespace std;
int main()
{
    int a=0;
    cin>>a;
    if(a/100000+a/10000%10+a/1000%10==a/100%10+a/10%10+a%10){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
