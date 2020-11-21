#include <bits/stdc++.h>

using namespace std;

int timeToNumber(string time){
	int hour = 0;
	int min = 0;
	bool ismin=false;
	for(int i = 0; i<time.size(); i++){
		if(time[i]==':')
			ismin = true;
			
		else if(ismin){
			
			min = min*10 +(time[i]-'0');
		}
				
		else{
			hour = hour*10 + (time[i]-'0')*60;	 
		}
		
	}

	
	return hour+min;
}


string numberToTime(int num){
	string hour = to_string(num/60);
	string min = to_string(num%60);
	
	if(min=="0")
		min+='0';
	string time = hour+':'+min;
	return time;
}

vector<vector<string>> meetingPlannerGoogle(vector<vector<string>> slot1, vector<vector<string>>slot2, vector<string> day1, vector<string> day2, int duration){
	auto comp = [](vector<string> a, vector<string> b){return timeToNumber(a[0])<timeToNumber(b[0]);};
	
	
	
	
	sort(slot1.begin(),slot1.end(), comp);
	sort(slot2.begin(),slot2.end(), comp);
	
	int i = 0;
	int j = 0;
	

	
	
	int deadStart = max(timeToNumber(day1[0]),timeToNumber(day2[0]));
	int deadEnd = min(timeToNumber(day1[1]),timeToNumber(day2[1]));
	
	
	vector<vector<string>> ans;
	
	while(i<slot1.size()-1 && j<slot2.size()-1){
		
		auto start = max(timeToNumber(slot1[i][1]),timeToNumber(slot2[j][1]));
		
		auto end = min(timeToNumber(slot1[i+1][0]),timeToNumber(slot2[j+1][0]));
		
		if(start>=deadStart && end<=deadEnd){
			if(start+duration<=end){
				auto temp = start;
				while(start+duration<=end){
					
					start += duration;
				}
				ans.push_back({numberToTime(temp),numberToTime(start)});
				
			}
						
		}
		
		if(timeToNumber(slot1[i+1][0]) > timeToNumber(slot2[j+1][0]))
			j++;
		else
			i++;
	}
	auto start = max(timeToNumber(slot1.back()[1]),timeToNumber(slot2.back()[1]));
	auto end = deadEnd;
	if(start>=deadStart && end<=deadEnd){
			if(start+duration<=end){
				auto temp = start;
				while(start+duration<=end){
					start += duration;
				}
				ans.push_back({numberToTime(temp),numberToTime(start)});
				
			}
						
	}
	
	
	return ans;
}

int main(){
	vector<vector<string>> slot1 = {{"9:00","10:30"},{"12:00","13:00"},{"16:00","18:00"}};
	vector<vector<string>> slot2 = {{"10:00","11:30"},{"12:30","14:30"},{"14:30","15:00"},{"16:30","17:00"}};
	
	vector<string>day1 = {"9:00","20:00"};
	vector<string>day2 = {"10:00","18:30"};
	auto ans = meetingPlannerGoogle(slot1,slot2,day1,day2,30);
	
	for(auto time : ans){
		cout<<time[0]<<" - "<<time[1]<<endl;
	}

	return 0;
}
