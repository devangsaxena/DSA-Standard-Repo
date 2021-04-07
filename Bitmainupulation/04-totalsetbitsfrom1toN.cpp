
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int helper(int n){
	int cnt=0;
	while(n){
		cnt++;
		n=n&(n-1);
	}
	return cnt;
}
//O(logN)
int helper2(int n){
	if(n==0){
		return 0;
	}
	int x=log2(n);
	int beforex=pow(2,x-1)*x;
	int afterx=n-pow(2,x)+1;
	int rem=helper2(n-pow(2,x));

	return (beforex+afterx+rem);
}
int32_t main()
{
	FIO;
	int n;
	cin>>n;
	int ans=0;
	/*for(int i=1;i<=n;i++){
		ans+=helper(n);
	}
	cout<<ans+1<<endl;*/
	cout<<helper2(n)<<endl;

	return 0;
}
