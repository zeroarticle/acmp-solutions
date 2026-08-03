#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=0, b=0, c=0;
    cin>>a>>b>>c;
    int r, e;
    r = max(max(a,b),c);
    e = min(min(a,b),c);
    cout<<r-e;
}
