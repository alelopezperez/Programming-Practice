#include<bits/stdc++.h>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
     	ListNode(int x) : val(x), next(NULL) {}
};


void reverselinkedlist(ListNode** head){
        ListNode* prev = NULL;
        ListNode* aux = *head;        
        ListNode* next;
        
        while(aux!=NULL){
            next = aux->next;
            aux->next = prev;
            prev = aux;            
            aux = next;
        }
        
        *head = prev;
}
void print(ListNode* head){
	while(head!=NULL){
		cout<<head->val;
		cout<<"\n";	
		head=head->next;
	}
}
int main(){
	ListNode n1 = ListNode(1);
	ListNode n2 = ListNode(2);
	ListNode n3 = ListNode(3);
	
	ListNode* head = &n1;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = NULL;
	
	print(&n1);
	reverselinkedlist(&head);
	cout<<"\n";
	print(head);
	cout<<"\n";
	print(head);

}
