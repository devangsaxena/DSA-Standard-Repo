
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

    int minInsertions(string s) {
        int n = s.size();
        int dp[n+1][n+1];
        string s2=s;
        reverse(s.begin(),s.end());
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i==0 || j==0){
                    dp[i][j] = 0;
                }
                else if(s[i-1]==s2[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
    
        return n-dp[n][n];
    }

int32_t main()
{
	FIO;
	

	return 0;
}
