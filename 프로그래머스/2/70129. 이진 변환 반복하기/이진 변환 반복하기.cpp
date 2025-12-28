#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    string n;
    int num=0, z=0;
    while(s!="1"){
        num+=1;
        n="";
        for(char c:s) {
            if(c!='0') n+=c;
            else z+=1;
        }
        int len = n.length();
        n="";
        while(len){
            string k = to_string(len%2);
            n+=k;
            len = len / 2;
        }
        s=n;
    }
    answer.push_back(num);
    answer.push_back(z);
    return answer;
}