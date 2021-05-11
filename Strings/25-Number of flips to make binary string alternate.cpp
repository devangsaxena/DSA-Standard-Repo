
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int minFlips (string s)
{
    // your code here
    int cnt0 = 0, cnt1 = 0;
	for(int i = 0; i < s.length(); i += 2){
		if(s[i] != '0')
			cnt0++;
		else
			cnt1++;
	}
	
	for(int i = 1; i < s.length(); i += 2)
	{
		if(s[i] != '1')
			cnt0++;
		else
			cnt1++;
	}
		
	return min(cnt0, cnt1);
}

int32_t main()
{
	FIO;
	

	return 0;
}
