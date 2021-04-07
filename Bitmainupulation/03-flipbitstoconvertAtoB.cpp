
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int32_t main()
{
	FIO;
	int a,b;
	cin>>a>>b;
	int res=a^b;
	int cnt=0;
	while(res){
		cnt++;
		res=res&(res-1);
	}
	cout<<cnt<<endl;

	return 0;
}
