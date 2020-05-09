// Time Complexity O(1)
// Space Complexity O(1)

long swapbit(long x, int i, int j){

	if(((x>>i)&1) != ((x>>j)&1)){
		x^=(1<<i);
		x^=(1<<j);	
	}
	return x;
}
