#include<stdio.h>
#define N 100
void main()
{
char a[N],b[N];
int n,i=0;
printf("the passwords are:\n");
gets(a);
printf("\n");
while(a[i]!='\0')
{
if(a[i]>='A'&&a[i]<='Z')
b[i]=155-a[i];
else
if(a[i]>='a'&&a[i]<='z')
b[i]=219-a[i];
else
b[i]=a[i];
i++;
}
n=i;
printf("the texts are:\n");
for(i=0;i<n;i++)
printf("%c",b[i]);
printf("\n");
}
