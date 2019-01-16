class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        vector<bool>cancelled(ops.size(), false);
        
        for(int i=0; i<ops.size(); i++){
            if(ops[i]=="C"){
                int j = i-1;
                while(j>=0){
                    if(!cancelled[j]){
                        cancelled[j]=true;
                        break;
                    }
                    j--;
                }
                cancelled[i]=true;                
            }
            
            else if(ops[i]=="D"){
                int j = i-1;
                while(j>=0){
                    if(!cancelled[j]){
                        ops[i]=to_string(2*stoi(ops[j]));
                        break;
                    }
                    j--;
                } 
            }
            
            else if(ops[i]=="+"){
                int j = i-1;
                int suma=0;
                int count=0;
                while(j>=0){
                    if(count==2){
                        break;
                    }
                    if(!cancelled[j]){
                        suma=suma+stoi(ops[j]);
                        count++;
                    }
                    j--;
                }
                ops[i]=to_string(suma);
            
            
            }
        }
        
        int suma=0;
        for(int i=0; i<ops.size(); i++){
          
            if(!cancelled[i]){
                suma=suma+stoi(ops[i]);
            }
         }
        
        return suma;
        
    }
};
