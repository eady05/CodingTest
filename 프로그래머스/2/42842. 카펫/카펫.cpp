#include <string>
#include <vector>

using namespace std;

//(가로+2)*2 + 세로*2
vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    if(yellow==1){
        answer.push_back(3);
        answer.push_back(3);
        return answer;
    }
    for(int i=1; i<=yellow/2; i++){
        if(yellow%i==0){
            int w=yellow/i+2;
            int h=i;
            int s = (w+h)*2;
            if(brown==s) {
                answer.push_back(w);
                answer.push_back(h+2);
                break;
            }
        }
    }
    return answer;
}