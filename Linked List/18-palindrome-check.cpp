
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


----concept-> find mid then reverse the second half , then apply palindrome concept----------
bool isPalindrome(ListNode* head) {

	ListNode* slow=head;
	ListNode* fast=head;
	ListNode* mid=NULL;

	while(fast && fast->next){
		slow=slow->next;
		fast=fast->next->next;
	}
	if(fast){
		mid=slow->next; ///for odd case
	}else{
		mid=slow;
	}

	ListNode*prev=NULL;
	//ListNode* mid=mid;
	while(mid){
		ListNode* nxt=mid->next;
		mid->next=prev;
		prev=mid;
		mid=nxt;
	}

	while(prev){
		if(prev->val != head->val){
			return false;
		}
		prev=prev->next;
		head=head->next;
	}
	return true;
        
}

int32_t main()
{
	FIO;
	

	return 0;
}
