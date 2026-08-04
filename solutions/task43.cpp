#include <iostream>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int b=a.size(), mmax=0,cur=0,curn=0;
    
    for(int i=0; i<b; i++){
    	if(a.at(i)=='0'){
    		if(curn==1){
    			cur=0;
    			curn=0;
			}
			cur+=1;
		}
		if(a.at(i)=='1'){
    		if(curn==0){
    			cur=0;
    			curn=1;
			}
		}
		mmax=max(mmax,cur);
	}
	cout<<mmax;
    return 0;
}
