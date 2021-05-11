
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

/*
 In one step you can choose any character of t and 
 replace it with another character.

Return the minimum number of steps to make t an anagram of s.
*/


    int minSteps(string s, string t) {
        unordered_map<char,int>m;
        int sum=0;
        for(auto i:s)
            m[i]++;
        for(auto i:t)
            m[i]--;
        for(auto i:m){
            if(i.second<0)
                sum += i.second;
        }
        return abs(sum);
    }

int32_t main()
{
	FIO;
	

	return 0;
}
