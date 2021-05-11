
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int helper(string s1, string s2){
    unordered_map<char,int>m1;
    for(int i=0;i<s1.length();i++){
        m1[s1[i]]++;
    }
    unordered_map<char,int>m2;
    for(int i=0;i<s2.length();i++){
        m2[s2[i]]++;
    }
    vector<int>v1;
    vector<int>v2;
    for(auto x:m1){
        v1.push_back(x.second);
    }
    for(auto x:m2){
        v2.push_back(x.second);
    }
    if(v1==v2){
        return 1;
    }else{
        return 0;
    }
}

int32_t main()
{
	FIO;
	

	return 0;
}
