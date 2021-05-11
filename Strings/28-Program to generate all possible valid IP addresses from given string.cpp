
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

    void dfs(vector<string>& res, string& s, int index, string path, int count) {
        if (count > 4) return;
        if (count == 4 && index >= s.length()) {
            path.pop_back();
            res.push_back(path);
            return;
        }
        for (int i = 1; i <= 3 && index + i <= s.length(); i++) {
            string num = s.substr(index, i);
            if (num[0] == '0' && i != 1) break;
            else if (stol(num) <= 255) {
                dfs(res, s, index + i, path + s.substr(index, i) + ".", count + 1);
            }
        }
    }
      vector<string> restoreIpAddresses(string s) {
        vector<string> res;
        dfs(res, s, 0, "", 0);
        return res;
    }

int32_t main()
{
	FIO;
	

	return 0;
}
