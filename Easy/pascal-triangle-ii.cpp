//https://leetcode.com/problems/pascals-triangle-ii/submissions/

// O(n^2) time complexity
// O(n)	space complexity
vector<int> getRow(int rowIndex) {
        vector<vector<int>> k;
        vector<int> k0(1,1);
        vector<int> k1(2,1);
        
        k.push_back(k0);
        k.push_back(k1);
        
        for(int i = 0; i < rowIndex-1; i++){
          
        	vector<int> aux(k.back().size()+1,1);
            
            	for(int j=1; j<aux.size()-1; j++){
                	aux[j]=k.back()[j]+k.back()[j-1];            
               
            	}
            	k.push_back(aux);
            
        }
        cout << k.size();
        return k[rowIndex];
}
