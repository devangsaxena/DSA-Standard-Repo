
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int i=n-1, j=0;
	    while(i>=0 && j<m){
	        if(arr1[i]>arr2[j]){
	            swap(arr1[i],arr2[j]);
	        }
	        else{
	            break;
	        }
	        i--;
	        j++;
	    }
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);
	}

int32_t main()
{
	FIO;
	

	return 0;
}
