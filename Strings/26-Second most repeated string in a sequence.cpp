
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

string secFrequent (string arr[], int n)
{
//code here.
	map<string,int> m;
	for(int i=0; i<n; i++){
		m[arr[i]]++;
	}
	vector<pair<int,string>> ans;
	for(auto x:m){
		ans.push_back({x.second,x.first});
	}
	sort(ans.begin(),ans.end());
	return ans[m.size()-2].second;
}

int32_t main()
{
	FIO;
	

	return 0;
}
