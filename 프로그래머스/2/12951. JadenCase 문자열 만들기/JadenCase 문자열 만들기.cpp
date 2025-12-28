#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    
    int k = 'a' - 'A';
    int flag=0;
    for(char c: s)
    {
        char n = c;
        if(c==' ') flag=0;
        else{
            if(flag==0){
                flag=1;
                if(c>'Z')  n = c - k;
            }
            else{
                if(c<'a'&&c>'9') n = c + k;
            }
        }
        answer += n;
    }
    

    return answer;
}