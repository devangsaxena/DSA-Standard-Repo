
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector<int> temp;
        for(auto i : Mat)
            temp.insert(temp.end(), i.begin(), i.end());
        sort(temp.begin(), temp.end());

        int counter = 0;
        for(int i = 0; i < Mat.size(); i++){
            for(int j = 0; j < Mat[i].size(); j++){
                Mat[i][j] = temp[counter++];
            }
        }
        return Mat;
    }

int32_t main()
{
	FIO;
	

	return 0;
}
