#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    
    for (char c : number) {
        while (!answer.empty() && k > 0 && answer.back() < c) {
            answer.pop_back();
            k--;
        }
        answer.push_back(c);
    }

    // 아직 제거해야 할 게 남아 있으면 뒤에서 제거
    if (k > 0)
        answer.erase(answer.end() - k, answer.end());

    return answer;
}
