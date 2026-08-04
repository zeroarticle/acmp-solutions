#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a=0,b=0,c=0;
    cin>>a;
    for(int i; i<a; i++){
        cin>>b>>c;
        cout<<19*c + (b + 239)*(b + 366) / 2<<endl;
    }
    return 0;
}
