
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

Node *merge(Node *l1, Node*l2){
	if(l1==NULL){
		return l2;
	}
	if(l2==NULL){
		return l1;
	}
	if(l1->data<l2->data){
		l1->next=merge(l1->next,l2);
		return l1;
	}
	else{
		l2->next=merge(l1,l2->next);
		return l2;
	}
}
Node * mergeKLists(Node *arr[], int K){
           // Your code here
	for(int i=1;i<K;i++){
		arr[0]=merge(arr[0],arr[i]);
	}
	return arr[0];
}

int32_t main()
{
	FIO;
	

	return 0;
}
