#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    char tempchar;
    int result=0,tempcount=0;
    cin>>a>>b;
    deque<char> chars(b.begin(), b.end());
    for(int k=0;k<b.size();k++){
    
    for(size_t i=0;i<(a.size()+1-b.size());i++){
        for(size_t j=0;j<b.size();j++){
            if(chars.at(j)==a.at(i+j)){
                tempcount+=1;
            }
        }
        result+=tempcount/b.size();
        tempcount=0;
        
        tempchar=chars.front();
        chars.pop_front();chars.push_back(tempchar);
    }
    deque<char> chars(b.begin(), b.end());
    tempchar=chars.front();
    chars.pop_front();chars.push_back(tempchar);
    }
    if(count(b.begin(), b.end(), b[0]) == b.size()){
        cout<<result/b.size();
    }else{
        cout<<result;
    }
    return 0;
}
