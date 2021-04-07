
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int helper(int n){
	if((n&(n-1))==0){
		return 0;
	}else{
		return 1;
	}
}

int32_t main()
{
	FIO;
	int n;
	cin>>n;
	(helper(n)==0)?cout<<"true"<<endl:cout<<"false"<<endl;
	return 0;
}
