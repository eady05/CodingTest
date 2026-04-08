#include <bits/stdc++.h>
using namespace std;
string land[55];
int visited[55][55];
int dy[] = {1,0,-1,0};
int dx[] = {0,1,0,-1};
int n,m,mx=0;

void bfs(int y, int x){
    fill(&visited[0][0], &visited[0][0] + 55*55, 0);
    visited[y][x]=1;
    queue<pair<int,int>> q;
    q.push({y,x});
    while(q.size()){
        tie(y,x) = q.front(); q.pop();
        for(int i=0; i<4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny<0||nx<0||ny>=n||nx>=m) continue;
            if(visited[ny][nx]) continue;
            if(land[ny][nx]=='W') continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny,nx});
            mx = max(mx, visited[ny][nx]);
        }
    }
}


int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>land[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(land[i][j]=='L'){
                bfs(i,j);
            }
        }
    }
    cout<<mx-1;
    return 0;
}
