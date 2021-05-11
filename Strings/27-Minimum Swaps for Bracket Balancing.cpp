
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int minimumNumberOfSwaps(string s){
	int ans=0,opening=0,close=0;
	for(int i=0;i<s.length();i++){ 
		if(s[i]=='['){
			ans+=close; 
			if(close>0)
				close--;
			else
				opening++;
		}
		if(S[i]==']'){
			if(opening>0)
				opening--;
			else
				close++;
		}
	}
	return ans;
}

int32_t main()
{
	FIO;
	

	return 0;
}
