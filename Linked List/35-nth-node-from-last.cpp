
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int len(Node *head){
	int length=0;
	while(head){
		length++;
		head=head->next;
	}
	return length;
}

int getNthFromLast(Node *head, int n)
{
       // Your code here
	Node *curr=head;
	int lenn=len(head);
	int pos=lenn-n;
	int cnt=0;
	if(n>lenn){
	    return -1;
	}
	while(cnt<pos){
		cnt++;
		curr=curr->next;
	}
	return curr->data;

}

int32_t main()
{
	FIO;
	

	return 0;
}
