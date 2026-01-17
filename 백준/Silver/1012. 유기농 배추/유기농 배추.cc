#include <bits/stdc++.h>
using namespace std;

int yard[105][105];
int visited[105][105];

int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};

int t,n,m,k,cnt;

void dfs(int y, int x)
{
    visited[y][x]=1;
    for(int i=0; i<4; i++)
    {
        int ny = y+dy[i];
        int nx = x+dx[i];
        if(ny<0||nx<0||ny>=n||nx>=m||yard[ny][nx]==0) continue;
        if(visited[ny][nx]==0) dfs(ny,nx);
    }
    return;
}

int main()
{
    cin>>t;

    for(int i=0; i<t; i++) // 테스트 케이스 개수
    {
        int cnt=0; //지렁이 개수
        cin>>m>>n>>k;//m:가로 n:세로, k:배추위치개수
        for(int j=0; j<k; j++) //배추 위치 입력
        {
            int x,y;
            cin>>x>>y;
            yard[y][x] = 1;
        }
        
        //배추 무리 세기
        for(int y=0; y<n; y++)
        {
            for(int x=0; x<m; x++)
            {
                if(visited[y][x]==0 && yard[y][x])
                {
                    dfs(y,x);
                    cnt++;
                }
            }
        }
        
        cout<<cnt<<'\n';
        //초기화(visited, yard)
        for(int j=0; j<105; j++)
        {
            for(int s=0; s<105; s++)
            {
                yard[j][s] = 0;
                visited[j][s] = 0;
            }
        }
        
    }
    
    return 0;
}