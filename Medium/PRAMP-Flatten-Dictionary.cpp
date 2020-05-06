//https://www.pramp.com/challenge/AMypWAprdmUlaP2gPVLZ
//TIme Complexity O(N)
//Space Complexity O(1)


#include <iostream>
#include <string>
#include <unordered_map>
#include <utility> 

using namespace std;

void flattenHelper(const unordered_map<string, void*>& dict, unordered_map<string, string>& ans, string name=""){
  
  for(auto element : dict){
    string aux = name;
   
    if(aux != ""){
      if(element.first != "")
        aux += "."+element.first;
    }
    
    else{
      if(element.first != "")
        aux = element.first;
    }
    
    if(sizeof(*element.second) == sizeof(int)){
      string key;
      ans.insert({aux,key});
    }
    
    else if(sizeof(*element.second) == sizeof(string)){
      ans.insert({aux,element.second});
      ans[aux] = 
    }
    
    else{
      flattenHelper(element.second,ans,aux);
    }
    
  }
  
}

unordered_map<string, string> flattenDictionary(const unordered_map<string, void*> &dict) 
{
  unordered_map<string, string> ans;
  flattenHelper(dict, ans);
  return ans;
  
}



int main() {
  return 0;
}
