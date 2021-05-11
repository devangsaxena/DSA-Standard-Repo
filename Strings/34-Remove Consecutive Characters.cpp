
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

///method1- iterative
 string removeConsecutiveCharacter(string S)
    {
       
        string ans;
        char curr = S[0];
        ans += curr;
        for (int i = 1; i < S.size(); i++) {
            if (curr != S[i]) {
                ans += S[i];
                curr = S[i];
            }
        }
        return ans;
    }
//method -2 recursive
     string removeConsecutiveCharacter(string S)
    {
        // code here.
       string s=S;
        if (s.size()==0) return "";

        char ch=s[0];
        string ans = removeConsecutiveCharacter(s.substr(1));

        if (ch==ans[0]) return ans;
        return ch+ans;
        
    }

int32_t main()
{
	FIO;
	

	return 0;
}
