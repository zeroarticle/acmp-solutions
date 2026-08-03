#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tmp,n,sn=1,sm=0,mn=INT_MAX,mx=INT_MIN,imn,imx; cin>>n; int l[n];
    for(int i=0;i<n;i++){
        cin>>tmp;
        if(tmp>0){
            sm+=tmp;
        }
        l[i]=tmp;
        if(mn>tmp){
            mn=tmp;
            imn=i;
        }
        if(mx<tmp){
            mx=tmp;
            imx=i;
        }
    }
    for(int i=imn+1;i<imx;i++){
        sn*=l[i];
    }
    for(int i=imn-1;i>imx;i--){
        sn*=l[i];
    }
    cout<<sm<<' '<<sn;
}
