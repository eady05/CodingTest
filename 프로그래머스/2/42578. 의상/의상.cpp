#include <string>
#include <vector>

using namespace std;
//종류별로 최대 1가지 의상
//일부겹치기 가능, 전체 비교시 같지만 않으면 됨
//최소 하루 한개 이상
//각각 개수+1개의 경우
vector<pair<string,int>> cnt_clothes;
int solution(vector<vector<string>> clothes) {
    int answer = 1,sum=0;
    for(int i=0; i<clothes.size(); i++){
        int flag=1;
        for(int j=0; j<cnt_clothes.size(); j++){
            if(clothes[i][1] == cnt_clothes[j].first) {
                cnt_clothes[j].second+=1;
                flag=0;
            }
        }
        if(flag) cnt_clothes.push_back(make_pair(clothes[i][1],1));
    }
    for(int k=0; k<cnt_clothes.size(); k++){
        int sum = cnt_clothes[k].second+1;
        answer*=sum;
    }
    answer= answer - 1;
        
    
    
    return answer;
}