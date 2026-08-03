#include <bits/stdc++.h>
using namespace std;
int main()
{
    int w,h,n,x1,y1,x2,y2,c=0; cin>>w>>h>>n;
    bool z[w][h];
    for(int a=0;a<w;a++){
        for(int v=0;v<h;v++){
            z[a][v]=true;
        }
    }
    for(int p=0;p<n;p++){
        cin>>x1>>y1>>x2>>y2;
        for(int a=x1;a<x2;a++){
            for(int v=y1;v<y2;v++){
                z[a][v]=false;
            }
        }
    }
    for(int a=0;a<w;a++){
        for(int v=0;v<h;v++){
            if(z[a][v]){
                c+=1;
            }
        }
    }
    cout<<c;
}
