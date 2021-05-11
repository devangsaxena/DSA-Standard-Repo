
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

/*Find the minimum number of steps required to 
transform string A into string B. The only allowed operation 
for the transformation is selecting a character from string A 
and inserting it in the beginning of string A.*/

int transform (string A, string B){
        //code here.
        int m = A.length(), n = B.length();
    if (n != m)
       return -1;
    int count[256];
    memset(count, 0, sizeof(count));
    for (int i=0; i<n; i++)   // count characters in A
       count[B[i]]++;
    for (int i=0; i<n; i++)   // subtract count for
       count[A[i]]--;         // every character in B
    for (int i=0; i<256; i++)   // Check if all counts become 0
      if (count[i])
         return -1;
 
    // This part calculates the number of operations required
    int res = 0;
    for (int i=n-1, j=n-1; i>=0; )
    {
        // If there is a mismatch, then keep incrementing
        // result 'res' until B[j] is not found in A[0..i]
        while (i>=0 && A[i] != B[j])
        {
            i--;
            res++;
        }
 
        // If A[i] and B[j] match
        if (i >= 0)
        {
            i--;
            j--;
        }
    }
    return res;
    }

int32_t main()
{
	FIO;
	

	return 0;
}
