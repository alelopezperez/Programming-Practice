//https://leetcode.com/problems/flood-fill/
//Time Complexity O(N)
//Space Complexity O(D) Depth of the matrix it could overflow, solve it with a stack

void helper(vector<vector<int>>& image, int& color, int& original, int ir, int ic){
        if(ir>=image.size() || ir<0)
            return;
        if(ic>=image[ir].size() || ic<0) 
            return;
        
        if(image[ir][ic]==original){
            image[ir][ic]=color;
        
            helper(image,color,original,ir+1,ic);
            helper(image,color,original,ir-1,ic);
            helper(image,color,original,ir,ic+1);
            helper(image,color,original,ir,ic-1);
        }
        
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int original = image[sr][sc];
        if(original != newColor)
            helper(image,newColor,original,sr,sc);
        return image;
        
}
