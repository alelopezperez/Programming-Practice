//https://leetcode.com/problems/rotate-string/
// Time COmplexity O(N^2);
// Space COmplexity O(N); creatin new string;

//KMP
// Time COmplexity O(N+M);
// Space COmplexity O(M); creatin new string;

bool rotateString(string A, string B) {
        
        return A.size()==B.size() && (A+A).find(B)!=-1;
        
}

bool kmp (string& s, string& p){
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

	
	return j>=p.size();
	
	
}
bool rotateString(string A, string B) {
        
        string neo = A+A;
        return A.size()==B.size() && kmp(neo,B);
        
}


//Rabin-Karp
// Time COmplexity O(N+M);
// Space COmplexity O(M); creatin new string;

bool rabin_karp (string& s, string& p){
        unordered_set<string> uset;
        
        uset.insert(p);
        
        if(uset.find(s)!=uset.end())
                return true;
        
        for(int initial = 0; initial<s.size(); initial++){
            string temp = s.substr(initial, p.size());
            if(uset.find(temp)!=uset.end())
                return true;
          
        }
        
        return false;
    }
bool rotateString(string A, string B) {
        
        string neo = A+A;
    
        return A.size()==B.size() && rabin_karp(neo,B);
        
    }
