//https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/submissions/
//Time Complexity O(M) where M  < N 
//Space Complexity O(1)
// Always be mindfull of the order of the ++ or --; the ifs and checks

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        int one = 0;
        int o = 0;
        int two = 0;
        int t = 0;
        
        while(one < word1.size() && two < word2.size()){

            if(word1[one][o] != word2[two][t])
                return false;
            
            o++;
            t++;
           
            if( o >= word1[one].size()){
                o = 0;
                one++;
            }
            
            if(t>= word2[two].size()){
                t = 0;
                two++;
            }


        }
        
        return one>=word1.size() && two >= word2.size();
        
}
