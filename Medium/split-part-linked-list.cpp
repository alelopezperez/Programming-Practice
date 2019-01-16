int count(ListNode* head){
        int i = 0;
        while(head!=NULL){
            i++;
            head = head->next;
        }
        return i;
    }
vector<ListNode*> splitListToParts(ListNode* root, int k) {
        vector<ListNode*> ans;
        int size = count(root);
        int i=0;
        int p1=size%k;
        int int_size=size/k;
        
        while(i!=k){
            if(root!=NULL){
                ans.push_back(root);
                for(int i=1; i<int_size; i++){
                    if(root!=NULL){
			root = root->next;
                    }

                }
                if(p1&&int_size){
                        root=root->next;
                	p1--;
                }
                
                ListNode* aux = root->next;
                root->next=NULL;
                root=aux;
            }
            else{
                ans.push_back(NULL);
            }
            i++;
        }
        return ans;
}
