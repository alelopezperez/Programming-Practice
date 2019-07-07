//https://leetcode.com/problems/stream-of-characters/submissions/
//Time Complexity O(N) since I will just go through the stream once
//Space Copmexity O(N) the Trie will grow linearly as there is letter in each word
//I learned that sometime i should look from tail to head. Also to resolve this proble is easy if you look it  bacwards and using tries.
//Time To Completion 40min

class StreamChecker {
public:
    class Trie{
    public:
        Trie* alpha[26];
        bool endOfWord;
        
        Trie(){
            for(int i = 0; i<26; i++)
                alpha[i] = NULL;
            endOfWord = false;
        }
    };
    
    void insert(Trie* root, string key){
        for(char letter : key){
            if(root->alpha[letter-'a']==NULL)
                root->alpha[letter-'a'] = new Trie();
            root=root->alpha[letter-'a'];
            
        }
        root->endOfWord = true;
    }
    
    bool find(Trie* root, string key){
        for(char letter : key){
            if(root->alpha[letter-'a']==NULL)
                return false;
            root=root->alpha[letter-'a'];
        }
        return root->endOfWord;
    }
    
    
    Trie* root;
    vector<char> stream;
    StreamChecker(vector<string>& words) {
        root = new Trie();
        for(auto w : words){
            reverse(w.begin(), w.end()); 
            insert(this->root, w);
        }
    }
    
    bool query(char letter) {
        stream.push_back(letter);
        Trie* aux = root;
        for(int i = stream.size()-1; i>=0; i--){
            if(aux->alpha[stream[i]-'a']==NULL){
                cout<<"hey";
                break;
            }
            
            aux=aux->alpha[stream[i]-'a'];            
            if(aux->endOfWord)
                return true;
        }
       
        return false;
    }
};
