//https://leetcode.com/problems/string-to-integer-atoi/
//Time Complexity O(N)
//Space Complxity O(N)
//I learned just to follow the rules of a simple atoi
//Time To Compleytion 30min
int myAtoi(string str) {
        bool isNegative = false;
        bool started = false;
        long long int i = 0;
        long long int num=0;
        if (str.empty())
            return num;
        
        if(str[0]=='-'){
            i++;
            isNegative =  true;
            started=true;
        }
        if(str[0]=='+'){
            i++;
            isNegative =  false;
            started=true;
        }
      
        for(i; i<str.size(); i++){
            if (str[i]==' ' && !started){
                              
            }
            else if(!started && str[i]=='-'){
                isNegative=true;
                started=true;
            }
            
            else if(!started && str[i]=='+'){
                isNegative= false;
                started=true;
            }
            
            else if(str[i]>='0' && str[i]<='9'){
                if(isNegative)
                    num=(num*10-(str[i]-'0'));
                else
                    num=num*10+str[i]-'0';
                
                if(!started){
                    started=true;
                }
                if(num>=INT_MAX){
                    num = INT_MAX;
                    break;
                }
                if(num<=INT_MIN){
                    num = INT_MIN;
                    break;
                }
            }
            else
                break;
           
        }
        
        return num ;
}
