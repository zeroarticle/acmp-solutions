#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,b=0,tmp; cin>>n; int l[n];
    for(int i=0;i<n;i++){
        cin>>tmp;
        l[i]=tmp;
        if(tmp%2==1){
            cout<<tmp<<' '; 
        }
    }
    cout<<'\n';
    for(int i=0;i<n;i++){
        if(l[i]%2==0){
            cout<<l[i]<<' ';b++;
        }
    }
    cout<<'\n';
    if(b<n-b){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
}
