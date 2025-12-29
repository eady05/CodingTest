#include <vector>
using namespace std;

int answer = 0;
vector<bool> visited;

void dfs(int fatigue, int cnt, vector<vector<int>>& dungeons) {
    answer = max(answer, cnt);

    for (int i = 0; i < dungeons.size(); i++) {
        int need = dungeons[i][0];
        int cost = dungeons[i][1];

        if (!visited[i] && fatigue >= need) {
            visited[i] = true;
            dfs(fatigue - cost, cnt + 1, dungeons);
            visited[i] = false; // 백트래킹
        }
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    visited.assign(dungeons.size(), false);
    dfs(k, 0, dungeons);
    return answer;
}
