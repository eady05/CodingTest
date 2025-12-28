#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int solution(vector<int> people, int limit) {
    int answer = 0, sum=0, k=0;
    //50,70,80
    sort(people.begin(), people.end());
    for(int i = people.size()-1; i>=k; i--){
        sum = people[i];//0
        if(sum+people[k]<=limit) k+=1;
        answer += 1;
    }
  
    
    
    return answer;
}