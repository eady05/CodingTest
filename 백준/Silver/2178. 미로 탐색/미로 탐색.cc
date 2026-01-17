#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

int t, n, m, k, x, y,c;
int visit[101][101] = { 0 };
int arr[101][101] = { 0 };
int dh[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
string maze,b;
pair<int, int> p;
queue<pair<int,int>>q;

void bfs(int h, int y)
{
    q.push({ h,y });
    visit[h][y] = 1;
    while (q.size() != 0)
    {
        int hh = q.front().first;
        int hy = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int th = hh + dh[i];
            int ty = hy + dy[i];
            if (0 <= th && th < n && 0 <= ty && ty < m)
            {
                if (arr[th][ty] == 1 && visit[th][ty] == 0)
                {
                    q.push({ th,ty });
                    visit[th][ty] = visit[hh][hy]+1;
                }
            }
        }
    }
}


int main()
{
    cin >> n >> m;
    for (int j = 0; j < n; j++)
    {
        cin >> maze;
        for (int i = 0; i < m; i++)
        {
            b= maze.substr(i,1);
            arr[j][i] = stoi(b);
        }
    }
    bfs(0, 0);
    c = visit[n - 1][m - 1];
    cout << c <<endl;
    return 0;
}