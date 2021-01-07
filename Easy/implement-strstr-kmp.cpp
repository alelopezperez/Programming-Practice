//https://leetcode.com/problems/implement-strstr/submissions/
// Time Complexity O(N+M) M to precompute the pattern and N to go throught the haystack 
// Space Complexity O(M) the pre compute table of size Pattern string M
// I used the KMP algorithm
 int kmp (string& s, string& p){
	vector<int> table(p.size(),0);
	
	int left = 0;
	int right = 1;
	
	int amount = 0;
	while(right < p.size()){
		while(left > 0 && p[left]!=p[right]){
			left = table[left-1];
		}
		
		if(p[left] == p[right])
			table[right] = ++left;
		else
			table[right] = 0;
			
		right++;
		
	}
	
	
	

	int i = 0;
	int j = 0;
	while(i < s.size() && j < p.size()){
		while(j>0 && p[j] != s[i]){
			j = table[j-1];
		}
		
		if(p[j] == s[i]){
			j++;
			
		}
		i++;
		
		
	}

	
	if (j>=p.size()){
        return (i-p.size());
    }
        
    return -1;
	
	
}
    int strStr(string haystack, string needle) {
        return kmp(haystack,needle);
     
    }
};
