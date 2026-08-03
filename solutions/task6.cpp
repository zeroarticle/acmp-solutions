#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    if(a.size()!=5 or a.at(2)!='-' or '1'>a.at(1) or a.at(1)>'8' or '1'>a.at(4) or a.at(4)>'8' or 'A'>a.at(0) or a.at(0)>'H' or 'A'>a.at(3) or a.at(3)>'H'){
        cout<<"ERROR";
        return 0;
    }
    int dy=abs(a.at(1)-a.at(4));
    int dx=abs(a.at(0)-a.at(3));
    if((dx==2 and dy==1) or (dy==2 and dx==1)){
        cout<<"YES";
    }else{cout<<"NO";}
}
