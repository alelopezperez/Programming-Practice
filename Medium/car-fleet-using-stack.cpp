//https://leetcode.com/problems/car-fleet/solution/
//Time complexity is O(nlog(n)+2n) // since i have to go throught the array create my new vector of pair; then I have to sort it; and finally i need to travese
//the my vector of pairs.
//Space Complexity O(N+N) since i use only one stack and one vector made from the two vector arguments
//time to completion 70min
//I learned that i need to believe in my intution and just try to solve the question a not restric my use of tools
//I was hesitating in using a sorting algorithm.
int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        if(!position.size())
            return 0;
        
        vector<pair<int,int>> cars;
        stack<float> s;
        
        for(int i = 0; i < position.size(); i++){
           cars.push_back(make_pair(position[i], speed[i]));
        }
        sort(cars.rbegin(), cars.rend());
        float time;
        for(pair<int,int> car : cars){
            time = ((target - car.first)/(float)car.second);
            cout<<time<<endl;
            if(s.empty()){
                s.push(time);
            }
            else if (time>s.top()){
                  s.push(time);
            }            
        }
        return s.size();
}
