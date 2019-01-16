#include <bits/stdc++.h>
using namespace std;

typedef struct linkedlist{
	int val;
	struct linkedlist* next;
} linkedlist;

void print(linkedlist* head){
	
	while(head != NULL){
		cout<<head->val;
		cout<<"\n";
		head = head->next;
	}
	
}

int tortoise_hare(linkedlist* head){

	linkedlist *slow, *fast;
	fast = head;
	slow = head;

	while(fast != NULL){
		fast = fast->next;
		if(fast == NULL)
			return -1;

		if(fast->val == slow->val){
			return fast->val;		
		}

		fast = fast->next;
		if(fast == NULL)
			return -1;
		if(fast->val == slow->val){
			return fast->val;		
		}

		slow = slow->next;
			
	}
	return -1;
}

int tortoise_hare_ale(linkedlist* head){

	linkedlist *slow, *fast, *aux;
	fast = head;
	aux = head;
	slow = head;

	while(fast != NULL){
		aux = aux->next;
		if(aux == NULL)
			return -1;
		if(aux->val == slow->val){
			return fast->val;		
		}
		fast = aux;

		aux = aux->next;
		slow = slow->next;
		if(aux == NULL)
			return -1;
		if(aux->val == slow->val){
			return fast->val;		
		}
		fast = aux;

		
			
	}
	return -1;
}

int tortoise_hare_ale_optmized(linkedlist* head){
	linkedlist *slow, *fast;
	fast = head;
	slow = head;

	while(fast != NULL){
		
		if(fast->next == NULL)
			return -1;
		if(fast->next->val == slow->val){
			return fast->val;		
		}
		fast = fast->next;

		slow = slow->next;
		if(fast->next == NULL)
			return -1;
		if(fast->next->val == slow->val){
			return fast->val;		
		}
		fast = fast->next;

		
			
	}
	return -1;
}
int main() {
	cout<<"HOLA\n";
	linkedlist head;
	linkedlist l2;
	linkedlist l3;
	linkedlist l4;
	linkedlist l5;
	
	head.val = 1;
	l2.val = 2;
	l3.val = 3;
	l4.val = 4;
	l5.val = 5;
	

	head.next = &l2;
	l2.next = &l3;
	l3.next = &l4;
	l4.next = &l5;
	l5.next = &l3;
	cout<<"\n";
	
	cout<<tortoise_hare(&head);
	cout<<"\n";

	cout<<tortoise_hare_ale(&head);
	cout<<"\n";
	
	cout<<tortoise_hare_ale_optmized(&head);
	cout<<"\n";

	return 0;
}




