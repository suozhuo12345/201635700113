#include<stdio.h>
void main( )
{
int i,jnum[]={8,6,5,4,1},temp;
for(i=0;i<5;i++)
{
for(j=0;j<4-i;j++)
{
if(num[j]>num[j+1])
{
temp=num[j];
num[j]=num[j+1];
num[j+1]=temp;
}
}
}
printf("ÄæĞòÅÅĞòÊÇ£º");
for(i=0;i<5;i++){
printf("%d\t",num[i]);
}
}
