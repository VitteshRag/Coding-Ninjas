int countDigits(int n){
	// Write your code here.	
	int cp=n,c=0;
	while(n)
	{
		int d=n%10;
		if(d>0 && cp%d==0 )
		c++;
		n/=10;
	}
	return c;
}