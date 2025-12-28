#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = ""; 
    stringstream ss(s);
    int t=0,mn,mx;
    while(getline(ss, answer, ' ')){
        if(t==0) {
            mn=mx=stoi(answer);
            t=1;
        }
        else{
            int n = stoi(answer);
            if(mn>n) mn = n;
            if(mx<n) mx = n;
        }
    }
    answer = to_string(mn) + ' ' + to_string(mx);
    
    return answer;
}