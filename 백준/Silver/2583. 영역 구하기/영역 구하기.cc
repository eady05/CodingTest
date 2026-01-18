#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<string>
using namespace std;

int n,m,k, rect[102][102] = { 0 }, visit[102][102] = { 0 },countarea=0, awidth=0;
int dh[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
vector<int>v;

void dfs(int h, int y) {
	visit[h][y] = 1;
	awidth++;
	for (int i = 0; i < 4; i++) 
	{
		int hh = h + dh[i];
		int hy = y + dy[i];
		if (1 <= hh && hh <=m  && 1 <= hy && hy <= n)
		{
			if (visit[hh][hy] == 0 && rect[hh][hy]==0)
			{
				dfs(hh, hy);
			}
		}
	}
}

int main() {
	cin >> m >> n >> k;
	int sx, sy, ex, ey;
	for (int i = 0; i < k; i++)
	{
		cin >> sx >> sy >> ex >> ey;
		for (int k = sy + 1; k <= ey; k++)
		{
			for (int j = sx + 1; j <= ex; j++)
			{
				rect[k][j] = 1;  //색칠된 지역
			}
		}
	}
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (visit[i][j] == 0 && rect[i][j] == 0)
			{
				awidth = 0;
				countarea++;
				dfs(i, j);
				v.push_back(awidth);
			}
		}
	}
	cout << countarea << "\n";
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
}