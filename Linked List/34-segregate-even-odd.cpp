
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


Node* divide(int N, Node *head){
        // code here
	Node *dummynode=new Node(INT_MIN);
	Node *tail=dummynode;

	Node *curr=head;
	while(curr){
		if((curr->data)%2==0){
			tail->next=new Node(curr->data);
			tail=tail->next;
		}
		curr=curr->next;
	}
	curr=head;
	while(curr){
		if((curr->data)%2!=0){
			tail->next=new Node(curr->data);
			tail=tail->next;
		}
		curr=curr->next;
	}
	return dummynode->next;
}


int32_t main()
{
	FIO;
	

	return 0;
}
