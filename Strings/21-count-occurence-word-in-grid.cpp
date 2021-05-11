
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


int internalSearch(vector<vector<char>>&grid, int row, int col, string s, int k)
{
    int cnt = 0;
 	int n=grid.size(), m=grid[0].size();
    if (row >= 0 && row <n  && col >= 0 && col <m && s[k] == grid[row][col])
    {
        char match = s[k];
        k += 1;
 
        grid[row][col] = '$';
 
        if (s[k] == 0)
        {
            cnt = 1;
        }
        else
        {
            cnt += internalSearch(grid,row+1,col,s,k);
            cnt += internalSearch(grid,row-1,col,s,k);
            cnt += internalSearch(grid,row,col+1,s,k);
            cnt += internalSearch(grid,row,col-1,s,k);
        }
        grid[row][col] = match;
    }
    return cnt;
}
 
int searchString(vector<vector<char>>&grid, string str)
{
    int cnt = 0;
 	
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            cnt += internalSearch(grid,i, j, str, 0);
        }
    }
    return cnt;
}

int32_t main()
{
	FIO;
	vector<vector<char>>grid={{'B','B','M','B','B','B'},
            {'C','B','A','B','B','B'},
            {'I','B','G','B','B','B'},
            {'G','B','I','B','B','B'},
            {'A','B','C','B','B','B'},
            {'M','C','I','G','A','M'}};
    string word="MAGIC";
    cout<<searchString(grid, word)<<endl;

	return 0;
}
