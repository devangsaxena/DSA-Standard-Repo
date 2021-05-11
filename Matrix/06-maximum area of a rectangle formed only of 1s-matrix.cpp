
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int histo(int arr[],int m){
    stack<int>st;
    int maxx=0,j=0,tp,area=0;
    while(j<m)
    {
        if(st.empty() || arr[st.top()]<arr[j])
        {
            st.push(j++);
        }
        else
        {
            tp=st.top();
            st.pop();
            if(st.empty())
                area=arr[tp]*j;
            else
            {
                area=arr[tp]*(j-st.top()-1);
            }
        }
        maxx=max(area,maxx);
    }
    while(!st.empty())
    {
        tp=st.top();
        st.pop();
        if(st.empty())
            area=arr[tp]*j;
        else
        {
            area=arr[tp]*(j-st.top()-1);
        }
        maxx=max(area,maxx);
    }
    return maxx;
}
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        int dp[n][m],i,j;
    for(i=0;i<m;i++)
    {
        dp[0][i]=M[0][i];
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(M[i][j])
                dp[i][j]=dp[i-1][j]+M[i][j];
            else
                dp[i][j]=0;
        }
    }
    int area=0,res=0;
    for(i=0;i<n;i++)
    {
        int maxx=histo(dp[i],m);
        res=max(res,maxx);
    }
     return res; 
    }
int32_t main()
{
	FIO;
	

	return 0;
}
