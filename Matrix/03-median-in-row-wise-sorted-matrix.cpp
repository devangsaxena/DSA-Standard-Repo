
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

//m-1
int helper(int arr[][MAX], int r, int c){
    int min=INT_MAX, max=INT_MIN;
    for(int i=0;i<r;i++){
        if(arr[i][0]<min){
            min=arr[i][0];
        }
        if(arr[i][c-1]>max){
            max=arr[i][c-1];
        }
    }
    int start=min, end=max;
    int desired=(r*c+1)/2;
   // int ans=0;
    while(start<end){
        int mid=start+(end-start)/2;
        int count=0;
        for(int i=0;i<r;i++){
            count+=upper_bound(arr[i],arr[i]+c,mid)-arr[i];
        }
        if(count<desired){
            start=mid+1;
        }
        else{
            end=mid;
        }
    }
    return start;
}
//m-2

int median(vector<vector<int>> &matrix, int r, int c){
        vector<int> result;
        for(int i = 0; i < r; i++)
            result.insert(result.end(), matrix[i].begin(), matrix[i].end());
        sort(result.begin(), result.end());
        return result[result.size() / 2];
}

int32_t main()
{
	FIO;
	

	return 0;
}
