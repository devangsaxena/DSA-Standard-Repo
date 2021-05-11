
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<vector<string> > Anagrams(vector<string>& string_list) 
{
    // Your Code Here
    unordered_map <string, vector<string>> mp;
    for(auto x : string_list) {
        string temp = x;
        sort(x.begin(), x.end());
        mp[x].push_back(temp);
    }
    vector<vector<string>> v;
    for(auto x : mp) {
        v.push_back(x.second);
    }
    return v;
}
int32_t main()
{
	FIO;
	

	return 0;
}
