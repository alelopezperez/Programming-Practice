//https://leetcode.com/problems/reverse-string/
//Time Complexity O(N/2)
//Space Complexity O(1)
//Reverse String

void reverseString(vector<char>& s) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int mid = s.size()/2;
        for(int i = 0; i<mid; i++){
            char aux = s[i];
            s[i] = s[s.size()-i-1];
            s[s.size()-i-1] = aux;
        }
}
