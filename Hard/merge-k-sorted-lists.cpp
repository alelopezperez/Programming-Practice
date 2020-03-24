//https://leetcode.com/problems/minimum-window-substring/submissions/
//Time Complexity O(N*k) 
//Space Complexity O(1)
//Time to Completion 30min
// EASY HARD BUT NOT OPTIMAL

ListNode* mergeKLists(vector<ListNode*>& lists) {
                
        ListNode* ans = new ListNode(-1);
        ListNode* next = ans;
        int curr = -1;
        ListNode* aux = new ListNode(1);

        while(aux->val != INT_MAX){
            aux = new ListNode(INT_MAX);
            for(int i = 0; i<lists.size(); i++){
                              
                if(lists[i] != NULL && lists[i]->val < aux->val){
                    aux->val = lists[i]->val;
                    curr = i;
                }
            }
            
            if(aux->val == INT_MAX) break;
                
            
            next->next = aux;
            next=next->next;
            
            if(lists[curr]!=NULL)
                lists[curr]=lists[curr]->next;

        }
        
        return ans->next;
}
