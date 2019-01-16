#include <bits/stdc++.h>
using namespace std;
vector<int> closest(string s, vector<int> queries) {
    	vector<int> answer;
	set<int> map[26];

	for(int i = 0; i<s.size(); i++){
		    map[s[i]-97].insert(i);
	}

	for(int i = 0; i<queries.size(); i++){            
		auto it = map[s[queries[i]]-97].find(queries[i]);

		if(it == map[s[queries[i]]-97].end()){
			answer.push_back(-1);
		}

		else{
		    if(it==map[s[queries[i]]-97].begin()){
		        if((next(it)) == map[s[queries[i]]-97].end()){
		            answer.push_back(-1);
		        }

		        else{
		            answer.push_back((*(next(it))));
		        }
		    }

		    else if((next(it)) == map[s[queries[i]]-97].end()){
		        answer.push_back(*(prev(it)));
		    }

		    else{
		        if(abs(*it-*(prev(it)))<=(abs(*it-*(next(it))))){
		            answer.push_back(*(prev(it)));
		        }

		        else{
		            answer.push_back(*(next(it)));
		        }
		    }   
		}
	}
	    
	    return answer;
}

int main(){
	vector<int> ale;
	ale.push_back(0);
	ale.push_back(1);
	ale.push_back(2);
	ale.push_back(3);
	vector<int> resp = closest("aaaa",ale);
	for(int i=0; i<resp.size(); i++){
		cout<<resp[i]<<"\n";
	}
	return 0;
}
