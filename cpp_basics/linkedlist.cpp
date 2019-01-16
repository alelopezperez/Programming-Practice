#include <bits/stdc++.h>
using namespace std;

struct linkednode {
	int val;
	struct linkednode* next;
};


int main(){

	linkednode head,nexto;
	head.val=5;
	nexto.val=10;
	head.next=&nexto;

	cout<<head.val<<"\n";
	cout<<(head.next->val)<<"\n";
	return 0;
}
