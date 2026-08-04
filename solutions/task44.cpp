#include <iostream>
using namespace std;
int main()
{
    string a; int b=0; cin>>a;
    for(int i=0;i<a.size();i++){
        if(a[i]=='>'){
            if(a[i+1]=='>'){
                if(a[i+2]=='-'){
                    if(a[i+3]=='-'){
                        if(a[i+4]=='>'){
                            b++;
                        }
                    }
                }
            }
        }
        if(a[i]=='<'){
            if(a[i+1]=='-'){
                if(a[i+2]=='-'){
                    if(a[i+3]=='<'){
                        if(a[i+4]=='<'){
                            b++;
                        }
                    }
                }
            }
        }
    }
    cout<<b;
}
