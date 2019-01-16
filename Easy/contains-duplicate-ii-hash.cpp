
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int, int> h;
        for(int i = 0; i<nums.size(); i++){
            if ( h.find(nums[i]) == h.end() ){
                h.insert(make_pair(nums[i],i));
		cout<<"insert:"<<nums[i]<<"\n";
            }
            else{
                if(abs(h[nums[i]]-i) <= k){
			cout<<h[nums[i]]<<"\n";
			cout<<i<<"\n";;
                    return true;
                }
		else{
			cout<<"Si pero no\n";
			h[nums[i]]=i;
		}
            }
        }
        return false;        
    }
};

int main(){

	//[1,2,3,1,2,3]
	vector<int> prueba;
	prueba.push_back(1);
	prueba.push_back(0);
	prueba.push_back(1);
	prueba.push_back(1);

	
	int k =  1;
	
	Solution s;
	if(s.containsNearbyDuplicate(prueba,1)){
		cout<<"Yay\n";	
	}
	else{
		cout<<"nay\n";	
	}
	return 0;
}























