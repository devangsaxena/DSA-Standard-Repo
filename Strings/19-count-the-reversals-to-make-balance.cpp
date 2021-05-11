
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


int countRev (string s)
{
    // your code here
    if(s.size() % 2 != 0){
            return -1;
    }
    stack<char> st;
    int unbalance = 0 ;
    for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '{')
            st.push('{');
            else
                {
                    if(st.empty())
                        unbalance++;
                    else
                        st.pop();
                }
        }
    return (unbalance+1)/2+((st.size()+1)/2);
}

int32_t main()
{
	FIO;
	

	return 0;
}
