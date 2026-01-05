#include<bits/stdc++.h>
using namespace std;

int visited[105][105];

int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};

queue<pair<int,int>>q;

int solution(vector<vector<int> > maps)
{
    int answer = -1;
    
    visited[0][0]=1; //0,0 에서 출발
    q.push({0,0});
    
    int n=maps.size();
    int m=maps[0].size();
    
    while(q.size()){
        auto now = q.front(); q.pop();
        for(int i=0; i<4; i++){
            int ny=now.first+dy[i];
            int nx=now.second+dx[i];
            if(ny<0||nx<0||ny>=n||nx>=m||maps[ny][nx]==0) continue;
            if(visited[ny][nx]==0){
                visited[ny][nx] = visited[now.first][now.second] + 1;
                q.push({ny,nx});
            }
        }
    }
    if(visited[n-1][m-1]) answer = visited[n-1][m-1];
    
    return answer;
}