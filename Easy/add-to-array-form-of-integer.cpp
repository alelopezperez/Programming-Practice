//O(n+M)
//O(1)
//Time To completion 60min
vector<int> addToArrayForm(vector<int>& A, int K) {
        int aux = K;
        int temp;
        vector<int> ans=A;
        int i = ans.size()-1;
        
        while(aux!=0){
            temp=aux%10;
            if(i<0){
                    ans.insert(ans.begin(), temp);
            }
            else{
                
                if(ans[i]+temp>9){
                    int t = i;
                    
                    while(ans[t]+temp>9 && t!=0){
                        
                        int a = (ans[t]+temp);
                        ans[t]=(ans[t]+temp)%10;
                        temp = (a)/10;
                        t--;

                    }
                    if(t==0 && (ans[t]+temp>9)){
                        int a = (ans[t]+temp);
                        ans[t]=(ans[t]+temp)%10;
                        temp=(a)/10;
                        ans.insert(ans.begin(), temp);
                        i++;
                    }

                    else{
                        ans[t]+=temp;
                    }              

                }

                else{
                    ans[i]+=temp;
                }
                i--;    
            }
            
            aux=aux/10;
            
        }
        
        return ans;
}

