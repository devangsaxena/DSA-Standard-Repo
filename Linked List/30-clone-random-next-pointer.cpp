
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

    Node* copyRandomList(Node* head) {

	map<Node*,Node*>m;
	Node *curr=head;

	while(curr){
		m[curr]= new Node(curr->val);
		curr=curr->next;
	}
	curr=head;
	while(curr){
		m[curr]->next=m[curr->next];
		m[curr]->random=m[curr->random];
		curr=curr->next;
	}
	return m[head];        
}

int32_t main()
{
	FIO;
	

	return 0;
}
