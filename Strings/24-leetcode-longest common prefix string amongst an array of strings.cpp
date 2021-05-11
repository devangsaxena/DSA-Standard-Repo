
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string prefix  = strs[0];
        for(int i = 0; i < strs.size(); i++)
        {
            while(strs[i].find(prefix) != 0)
            {
                prefix = prefix.substr(0, prefix.size()-1);
            }
            if(prefix.empty()) return "";
        }
        return prefix;
}

int32_t main()
{
	FIO;
	

	return 0;
}
