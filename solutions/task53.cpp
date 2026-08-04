#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q,w,r=0,g=0,b=0,a=0; cin>>q>>w;
    for(int i=1;i<=q;i++){
        for(int j=1;j<=w;j++){
            if((i*j)%5==0){
                b++;
            }else{
                if((i*j)%3==0){
                    g++;
                }else{
                    if((i*j)%2==0){
                        r++;
                    }else{
                        a++;
                    }
                }
            }
        }
    }
    cout<<"RED : "<<r<<"\nGREEN : "<<g<<"\nBLUE : "<<b<<"\nBLACK : "<<a;
}
