
//https://leetcode.com/problems/plus-one/

vector<int> plusOne(vector<int>& digits) {
        
	int i = digits.size()-1;
        if(digits[i]!=9){
        	digits[i]++;
            	return digits;
        }

        else{

		while(digits[i]==9 && i>=0){
                	digits[i]=0;
                	i--;
            	}
            
            	cout<<i;
            	if(i==-1){
			digits.insert(digits.begin(),1);
            	}

            	else
                	digits[i]++;

            	return digits;
	}
}
