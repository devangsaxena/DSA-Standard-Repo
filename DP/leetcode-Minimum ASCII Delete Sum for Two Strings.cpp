
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int minimumDeleteSum(string s1, string s2) {
	
	int n=s1.length();
	int m=s2.length();
	vector<vector<int>>dp(n+1,vector<int>(m+1));
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==0 || j==0){
				dp[i][j]=0;
			}
			else if(s1[i-1]==s2[j-1]){
				dp[i][j]=dp[i-1][j-1]+s1[i-1];
			}
			else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}        
	int ans=0;
	for(int i=0;i<n;i++){
		ans+=s1[i];
	}
	for(int j=0;j<m;j++){
		ans+=s2[j];
	}
	return ans-2*dp[n][m];
}

int32_t main()
{
	FIO;
	

	return 0;
}
