#include <bits/stdc++.h>
using namespace std;

struct linkednode {
	int val;
	struct linkednode* next;
};

void removeDups(linkednode* head){
	linkednode *aux=head;
	linkednode *previous=NULL;
	unordered_set<int> map;

	while(aux!=NULL){
		if(map.find(aux->val) == map.end()){
			map.insert(aux->val);
			previous=aux;

		}
		else{			
			previous->next = aux->next;
			
				
			
		}
		aux=aux->next;	
	}

	
}

void removeDups_inline(linkednode* head){
	linkednode *aux=head;

	while(aux!=NULL){
		linkednode *runner=aux;
		while(runner->next != NULL){
			if(runner->next->val==aux->val){
				runner->next=runner->next->next;
			}
			else{
				runner=runner->next;
			}
		}
		aux=aux->next;
	}	

	
}

int main(){

	linkednode head, next1, next2, next3;
	head.val=1;
	next1.val=1;
	next2.val=1;
	next3.val=3;
	
	head.next=&next1;
	next1.next=&next2;
	next2.next=&next3;
	next3.next=NULL;

	linkednode *aux=&head;
	while(aux!=NULL){
		cout<<aux->val;
		cout<<"\n";
		aux=aux->next;
	}
	
	removeDups_inline(&head);
	cout<<"\n";cout<<"\n";
	aux=&head;
	while(aux!=NULL){
		cout<<aux->val;
		cout<<"\n";
		aux=aux->next;
	}
	

	return 0;
}
