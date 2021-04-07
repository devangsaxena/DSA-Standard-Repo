
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool kthbitset(int n, int k){
	int ans=(n>>k)&1;
	if(ans==1){
		return true;
	}else{
		return false;
	}
}

int cntsetbit(int n){
	int cnt=0;
	while(n){
		cnt++;
		n=(n-1)&n;
	}
	return cnt;
}

int32_t main()
{
	FIO;
	int n;
	cin>>n;
	if(cntsetbit(n)>1|| cntsetbit(n)==0){
		cout<<"-1"<<endl;
	}else{
		for(int i=0;i<32;i++){
			bool ans=kthbitset(n,i);
			if(ans==true){
				cout<<i+1<<endl;
				break;
			}
		}
	}
	

	return 0;
}
