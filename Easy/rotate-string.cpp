//https://leetcode.com/problems/rotate-string/
// Time COmplexity O(N^2);
// Space COmplexity O(N); creatin new string;

bool rotateString(string A, string B) {
        
        return A.size()==B.size() && (A+A).find(B)!=-1;
        
}
