#include<stdio.h>
int main( )
{
	int a[3][3],snm=0;
	int i,j;
	printf("enter data:\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%3d",&a[i][i]);
	for(i=0;i<3;j++)
	sum=sum+a[i][i]; 
	printf("snm=%6d\n",sum);
	return 0;
}
