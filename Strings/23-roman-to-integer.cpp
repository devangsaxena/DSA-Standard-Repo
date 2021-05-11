
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int helper(string s){
    map<char,int>m;
    m['I']=1;
    m['V']=5;
    m['X']=10;
    m['L']=50;
    m['C']=100;
    m['D']=500;
    m['M']=1000;
    int i=0;
    int ans=0;
    if(s.length()<=1){
        return m[s[0]];
    }
    else{
        while(i<s.length()){
            if(m[s[i]]<m[s[i+1]]){
                ans+=m[s[i+1]]-m[s[i]];
                i+=2;
            }
            else{
                ans+=m[s[i]];
                i++;
            }
        }
    }
    return ans;
}

int32_t main()
{
	FIO;
	cout<<helper("V")<<endl;

	return 0;
}
