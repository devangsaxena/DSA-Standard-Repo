
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<int>x = { -1, -1, -1, 0, 0, 1, 1, 1 };
vector<int>y = { -1, 0, 1, -1, 1, -1, 0, 1 };

bool search2D(vector<vector<char>> grid, int row, int col, string word)
{
	int n = grid.size();
	int m = grid[0].size();
	if (grid[row][col] != word[0])
		return false;

	int len = word.size();
	for (int i = 0; i < 8; i++){
		int k, newrow = row + x[i], newcol = col + y[i];
		for (k = 1; k < len; k++){
			if (newrow >= n || newrow < 0 || newcol >= m || newcol < 0)
				break;
			if (grid[newrow][newcol] != word[k])
				break;
			newrow += x[i], newcol += y[i];
		}
	if (k == len)
		return true;
	}
	return false;
}

vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    // Code here
	int row = grid.size();
	int col = grid[0].size();
	vector<vector<int>>ans;
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			if(search2D(grid, i, j, word)){
				ans.push_back({i, j});
			}
		}
	}
	return ans;
}

int32_t main()
{
	FIO;
	

	return 0;
}
