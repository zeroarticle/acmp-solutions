#include <bits/stdc++.h>
#include <bitset>
using namespace std;
int main()
{
    int a,n=0; cin>>a;
    string b=bitset<32>(a).to_string();
    for(int i=0;i<32;i++){
        if(b[i]=='1'){
            n++;
        }
    }
    cout<<n;
}
