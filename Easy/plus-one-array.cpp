
//https://leetcode.com/problems/plus-one/

// Time Complexity O(2N) equivalent to O(n) since we first need to pass one time through the array and a second time when adding the extra 1
// Space Complexity O(1) constant
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
