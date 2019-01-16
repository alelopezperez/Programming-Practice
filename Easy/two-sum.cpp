#include<iostream>
#include<vector>
#include<algorithm>//it has sort and binary also more that i dont know
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ans;
        vector<pair<int,int>> nums2;
        
        int size = nums.size();
        
        for(int i = 0; i<size; i++){
            pair<int,int> temp(nums[i], i);
            nums2.push_back(temp);
        }
        sort(nums2.begin(),nums2.end());
        
        int i=0;
        int j=size-1;
        

        while(i<j){
            if(nums2[i].first+nums2[j].first == target){
                ans.push_back(nums2[i].second); 
                ans.push_back(nums2[j].second);
            }
            
            else if(nums2[i].first+nums2[j].first > target)
                j--;
            
            else if (nums2[i].first+nums2[j].first < target)
                i++;               
            
        }
        
        return ans;
        
        
    }
};

int main(){

	vector<int> p;
	p.push_back(2);
	p.push_back(7);
	p.push_back(11);
	p.push_back(15);
	Solution s;
	
	vector<int> ans = s.twoSum(p,17);

}
