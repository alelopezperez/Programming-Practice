//https://leetcode.com/problems/add-strings/
//Time Complexity O(M) where M is the larget string
//Space COMplecity O(1) constan variable
//EASY

string addStrings(string num1, string num2) {
        
        int i = num1.size()-1;
        int j = num2.size()-1;
        string ans;
        int res = 0;
       
      
        while(i>=0 || j>=0){
           
            int sum = 0;
            sum += res;
            
            if(i>=0){
                sum += (num1[i]-'0');
                i--;
            }
            
            if(j>=0){
                sum += (num2[j]-'0');
                j--;
            }
            
            res = sum / 10;
           
            if(sum>=10)
                sum = sum%10;
            ans.push_back('0'+sum);      
            
        }
        if(res>0)
            ans.push_back('0'+res);   
        reverse(ans.begin(), ans.end()); 
        return ans;
        
}
