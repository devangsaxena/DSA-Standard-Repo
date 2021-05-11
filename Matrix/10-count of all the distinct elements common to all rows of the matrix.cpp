
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

    int distinct(vector<vector<int>> M, int N)
    {
        // code here
         unordered_map<int, int> mp;
        
        for(int i = 0; i < M.size(); i++)
        {
            for(int j = 0; j < M[i].size(); j++)
            {
                if(mp[M[i][j]] == i)
                {
                    mp[M[i][j]]++;
                }
            }
        }
        
        int res = 0;
        for(auto x: mp)
        {
            if(x.second == N)
            {
                res++;
            }
        }
        
        return res;
    }

int32_t main()
{
	FIO;
	

	return 0;
}
