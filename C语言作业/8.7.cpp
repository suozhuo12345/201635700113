#include <stdio.h>
#include<string.h>

void main ()
{
	int i,m,n;
	char str[100]={0};
	printf("����n:");
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	 str[i]=getchar();
	printf("����m:");
	 scanf("%d",&m);
	printf("%s\n",str+m-1);
}
