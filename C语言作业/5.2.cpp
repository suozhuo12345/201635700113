#include<stdio.h>
#include<math.h>
int main()
{
	int sign=1,count=0;
	double pi=0.0,n=1.0,term=1.0;
	while(fabs(term)>=le-8); 
	term代表当前项的值 
	{
		pi=pi+term;
		n=n+2;
		sign=-sign;
		tern=sign/n;
		count++;
	}
	pi=pi*4;
	printf("pi=%10.8f\n",pi)
	prontf("count=%d\n",count);
	return 0;
}
