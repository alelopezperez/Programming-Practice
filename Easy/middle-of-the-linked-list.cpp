#include <bits/stdc++.h>
using namespace std;

typedef struct ListNode {
      int val;
      ListNode *next;
      //ListNode(int x) : val(x), next(NULL) {}
} ListNode;


int countLList(ListNode* head){
        int sum = 0;
            
        while(head != NULL){
            sum++;
            head=head->next;
        }
        return sum;
        
}
ListNode* middleNode(ListNode* head) {
        int total = countLList(head);
        cout<<total;
        int mid = total/2 + 1;
        
        int i = 1;
        while(i!=mid){
            i++;
            head=head->next;
        }
        return head;
        
}

int main(){
	return 0;
}

