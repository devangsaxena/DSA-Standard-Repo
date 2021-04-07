
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

int32_t main()
{
	FIO;
	int x,y;
	cin>>x>>y;
	int l,r;
	cin>>l>>r;
	vector<int>v;
	for(int i=l;i<=r;i++){
		bool ans=kthbitset(y,i);
		if(ans==true){
			v.push_back(i);
		}
	}
	for(int i=0;i<v.size();i++){
		if(kthbitset(x,v[i])==false){
			x=x|1<<v[i];
		}
	}
	cout<<x<<endl;
	/*for(auto k:v){
		if(kthbitset(x,k)==false){
			x=x|(1<<k);
		}
	}
	cout<<x<<endl;*/


	return 0;
}
