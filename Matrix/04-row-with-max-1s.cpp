
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int j=m-1, i=0;
        int res=-1;
        while(i<n && j>=0){
            if(arr[i][j]==1){
                j--;
                res= i;
            }
            else{
                i++;
            }
        }
        return res;
	}

int32_t main()
{
	FIO;
	

	return 0;
}
