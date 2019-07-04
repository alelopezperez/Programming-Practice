//https://leetcode.com/problems/replace-words/submissions/
//Time Complexity O(N)
//Space Complexity O(N)
//Use a trie yeah
class Trie{
    public:
        Trie* alpha[26];
        bool endOfWord;
        Trie(){
            endOfWord = false;
            for (int i = 0; i < 26; i++)
			    alpha[i] = NULL;
        }
        
};
    
void insert(Trie* root, string key){
        for(char letter : key){
            if(root->alpha[letter-'a']==NULL)
                root->alpha[letter-'a'] = new Trie();         
            root = root->alpha[letter-'a'];
            
        }
        root->endOfWord = true;
}
    
string shouldReplace(Trie* root, string key){
        string temp = "";
        for(char l : key){
            if(root->alpha[l-'a'] != NULL){
                
                root = root->alpha[l-'a'];
                temp.push_back(l);
                if(root->endOfWord)
                    return temp;
            }
            else{
                return "";
            }
        }
        return "";
}
string replaceWords(vector<string>& dict, string sentence) {
        string temp = "";
        vector<string> look;
        for(char l : sentence){
            if(l == ' '){
                look.push_back(temp);
                temp = "";
            }
            else{
                temp.push_back(l);
            }
        }
        look.push_back(temp);
        Trie* root;
        root = new Trie();
        
        for(auto N : dict){
            insert(root, N);
            cout<<N<<endl;
        }
        
        for(int i = 0; i<look.size(); i++){
            string ans = shouldReplace(root, look[i]);
            //cout<<look[i]<<":";
            if(ans != ""){
                look[i] = ans;
                //cout<<"yes";
            }  
            else{
                //cout<<"no";
            }
            //cout<<endl;
        }
        string newsentence = "";
        
        for(auto N : look){
            newsentence.append(N);
            newsentence.push_back(' ');
        }
        newsentence.pop_back();
        
       
        return newsentence;
        
}
