//https://leetcode.com/problems/shortest-word-distance/
//Time Complexity O(N) one pass thorght
//Space Compelxity O(1)


int shortestDistance(vector<string>& words, string word1, string word2) {
        int first = -1;
        int second = -1;
        int min_dist = INT_MAX;
        for(int i = 0; i<words.size(); i++){
            if(words[i]==word1)
                first = i;
            else if(words[i]==word2)
                second = i;
            if(first!=-1 && second!=-1)
                min_dist = min(min_dist, (abs(first-second)));
        }
        return min_dist;
}
