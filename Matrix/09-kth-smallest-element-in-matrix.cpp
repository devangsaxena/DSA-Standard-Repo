
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
    priority_queue<int>pq;
    for(int i = 0; i < n; i++){
        for(int j = 0;j < n; j++){
            pq.push(mat[i][j]);
            if(pq.size()>k){
                pq.pop();
            }
        }
    }
    return pq.top();
}
int32_t main()
{
	FIO;
	

	return 0;
}
