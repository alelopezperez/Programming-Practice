
// Time Complexity O(log(y))
//Space complexity O(1)
//I learned with math problem you need to try to find what limitation you can find to decrease the scope 
//of posibilites. For example  in this problem instead of multiply by to 2; it's better to use divide because
// you can only divide mutiples of 2
// I use the solution chee to know the answers
int brokenCalc(int X, int Y) {
        int accum=0;
        while(Y>X){
		accum++;
		if(Y%2){
		        Y++;
		}
		else{
			Y=Y/2;		        
		}
        }
        return accum + X-Y;
        
}
