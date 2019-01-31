//https://leetcode.com/problems/insertion-sort-list/
//This implementation of the insertios sort was not accepted it was slower than the expected result
// O(n^2) time complexity
// O(1) space complexity
struct ListNode {
	int val;
     	ListNode *next;
     	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* insertionSortList(ListNode* head) {
        if(head==NULL)
            return NULL;
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* prev = head;
        ListNode* curr= head->next;
        
        while(curr!=NULL){
            //cout<<curr->val<<endl;
            ListNode* d = dummy;
            while(d->next!=NULL){
                if(curr->val < d->next->val){
                    ListNode* l;
                    //cout<<curr->val<<" es menor a "<<d->next->val<<endl;
                    l=curr;
                    prev->next=prev->next->next;
                    curr->next=d->next;
                    d->next=curr;
                    curr=l->next;
                    break;                  
                }
                //cout<<"HEY:"<<d->val<<endl;
                d=d->next;               
            }
            prev = curr;
            curr=curr->next;
        }
        return dummy->next;
}
