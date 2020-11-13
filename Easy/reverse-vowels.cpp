//https://leetcode.com/problems/reverse-vowels-of-a-string/submissions/
//Time Complexity O(N) or O(2N)
//Space COmpelxity O(1) or O(N)

string reverseVowels(string s) {
        vector<int> pos;
        
        for(int i = 0; i<s.size(); i++){
            char letter = s[i];
            if(isalpha(letter) && (tolower(letter) =='a' || tolower(letter) =='e' || tolower(letter) =='i' || tolower(letter) =='o' || tolower(letter) =='u'))
                pos.push_back(i);
            
        }
        
        int left = 0;
        int right = pos.size()-1;
        while(left<right){
            swap(s[pos[left]],s[pos[right]]);
            left++;
            right--;
        }
        return s;
        
}

    string vowels = "aeiouAEIOU";
    string reverseVowels(string s) {
        
        int left = 0;
        int right = s.size();
        
        while(left<right){
            while(left<s.size() && !isvowel(s[left]))
                left++;
            
            while(right>=0 && !isvowel(s[right]))
                right--;
            
            if(left<right)
                swap(s[left],s[right]);
            
            left++;
            right--;
        }
        return s;
        
        
    }
    
    bool isvowel(char& c){
      
        for(auto& letter : vowels){
            if(c == letter)
                return true;
        }
        return false;
    }
