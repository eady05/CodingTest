#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int k=0;
    
    for(char c:s){
        if(c=='(') k+=1;
        else k-=1;
        if (k < 0) return false;
    }
    if(k!=0) answer=false;

    return answer;
}