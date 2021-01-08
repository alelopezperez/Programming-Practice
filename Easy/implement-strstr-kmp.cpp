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


// Time Complexity O(N+M) M to precompute the hashing for each 
// Space Complexity O(1) constant space for one hash
// I used the Rabin-Karp algorithm

int rabin_karp (string& s, string& p){
        unordered_set<string> uset;
        
        uset.insert(p);
        for(int initial = 0; initial<s.size(); initial++){
            string temp = s.substr(initial, p.size());
            if(uset.find(temp)!=uset.end())
                return initial;
          
        }
        
        return -1;
    }
int strStr(string haystack, string needle) {
        
        if(haystack == needle || needle.size() == 0 )
                return 0;
        return rabin_karp(haystack,needle);
     
    }
