//https://leetcode.com/problems/fizz-buzz/submissions/
//Time Complexity O(N)
//Space Complexity O(N) because of the new created array for the answer 
//Super easy fizz buzz
vector<string> fizzBuzz(int n) {
        vector<string> fibu;
        for(int i = 1; i<=n; i++){
            if(i%15==0)
                fibu.push_back("FizzBuzz");
            else if(i%3==0)
                fibu.push_back("Fizz");
            else if(i%5==0)
                fibu.push_back("Buzz");
            else
                fibu.push_back(to_string(i));               
            
        }        
        
        return fibu;
}
