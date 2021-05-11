
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

string printSequence(string S)
{
    //code here.
    string arr[] = {"2","22","222",
                    "3","33","333",
                    "4","44","444",
                    "5","55","555",
                    "6","66","666",
                    "7","77","777","7777",
                    "8","88","888",
                    "9","99","999","9999"
                    };
    
    string ans = "";
    int n = S.length();
    for (int i=0; i<n; i++)
    {
        if (S[i] == ' ')
            ans = ans + "0";
 
        else
        {
            int position = S[i]-'A';
            ans = ans + arr[position];
        }
    }
    return ans;
}

int32_t main()
{
	FIO;
	

	return 0;
}
