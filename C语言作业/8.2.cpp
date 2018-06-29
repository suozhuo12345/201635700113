#include<stdio.h>
#include<string.h>
int
main()
{
 char str[3][20],*p[3],*ptr;
 int i,j;
 for(i=0;i<3;i++)
 p[i]=str[i];
 printf("«Î ‰»Î»˝∏ˆ◊÷∑˚¥Æ:\n");
 for(i=0;i<3;i++)
  scanf("%s",str[i]);
 for(i=0;i<2;i++)
  for(j=i+1;j<3;j++)
   if(strcmp(p[i],p[j])>0){
    ptr=p[i];
    p[i]=p[j];
    p[j]=ptr;   
   }
   printf("≈≈–Ú∫Û:\n");
   for(i=0;i<3;i++)
    printf("%s\n",p[i]);
   return 0;
}
