#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<string>
using namespace std;

int n,zone[102][102] = { 0 }, safezone[102][102] = { 0 }, visit[102][102] = { 0 }, countnum=0, mx=0;
int dh[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

void dfs(int h, int y) {
	visit[h][y] = 1;
	for (int i = 0; i < 4; i++) 
	{
		int hh = h + dh[i];
		int hy = y + dy[i];
		if (1 <= hh && hh <= n && 1 <= hy && hy <= n)
		{
			if (visit[hh][hy] == 0 && safezone[hh][hy]==0)
			{
				dfs(hh, hy);
			}
		}
	}
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) 
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> zone[i][j];
		}
	}

	for (int i = 0; i < 101; i++) 
	{
		countnum = 0;
		for (int j = 1; j <= n; j++)
		{
			for (int k = 1; k <= n; k++)
			{
				visit[j][k] = 0;
				if (i >= zone[j][k])
				{
					safezone[j][k] = 1;
				}
				else
				{
					safezone[j][k] = 0;
				}
			}
		}
		for (int j = 1; j <= n; j++)
		{
			for (int k = 1; k <= n; k++)
			{
				if (visit[j][k] == 0 && safezone[j][k] == 0)
				{
					countnum++;
					dfs(j, k);
				}
				if (countnum > mx)
				{
					mx = countnum;
				}
			}
		}
	}

	cout << mx << endl;

}