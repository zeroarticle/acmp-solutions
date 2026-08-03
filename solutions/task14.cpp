#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,d;
    cin >> a >> b;
    c=a;
    d=b;
    while(b%=a) swap(a,b);
    cout << c*d/a;
    return 0;
}
