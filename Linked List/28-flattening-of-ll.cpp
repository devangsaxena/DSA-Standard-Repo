
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
		l1->bottom=merge(l1->bottom,l2);
		return l1;
	}
	else{
		l2->bottom=merge(l1,l2->bottom);
		return l2;
	}
}

Node *flatten(Node *root)
{
   // Your code here
	if(root==NULL || root->next==NULL){
		return root;
	}
	// for list on right
	root->next=flatten(root->next);

	// merge operation on answer of recur
	root=merge(root,root->next);

	return root;
}

int32_t main()
{
	FIO;
	

	return 0;
}
