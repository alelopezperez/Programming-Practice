// https://leetcode.com/problems/count-of-matches-in-tournament/
// Time Complexity O(log(n)) where N is the number given, since we alway do division by two.
// Space Complexity O(1)
int numberOfMatches(int n) {
            int matches = 0;
            while(n>1){
                if(n%2 == 0){
                    n/=2;
                    matches += n;

                }
                else{
                    matches+= (n-1)/2;
                    n = (n-1)/2+1;
                }
            }

            return matches;
}
// A better version withouth if; because int always work
int numberOfMatches(int n) {
	int matches = 0;
	while(n>1){
                
		matches+= (n)/2;
                
		n = (n)/2+n%2;
	}

	return matches;
}

//Time Complexity O(1)
//Space Compleixity O(1)
//Why does this work

int numberOfMatches(int n) {
	
	return n-1;
}
