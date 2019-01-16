#include <bits/stdc++.h>
using namespace std;

    bool isOneEditDistance(string &s, string &t) {
        if(s=="" & t=="")
            return false;
        int m = s.size();
	    int n = t.size();    
        if(abs(m-n) > 1 ){
            return false;
        }
        
        int i=0;
        int j=0;
        int count=0;
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            
            else{
                if(s.size()>t.size()){
                    i++;
                }
                else if(t.size()>s.size()){
                    j++;
    
                }
                else{
                    i++;
                    j++;
                  
                }
                count++;
                
            }
        }
        if(i < m || j < n)
            count++;
            
        if(count!=1){
            return false;
        }
        
        return true;
      
    }

int main(){
	string s;
	string t;
	cin>>s;
	cin>>t;

	cout<<isOneEditDistance(s,t);
}










