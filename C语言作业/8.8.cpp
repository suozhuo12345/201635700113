#include<stdio.h>
void main()
{
 char q[100];
 char *p;
 int a=0,b=0,c=0,d=0,e=0,f=0,i;
 p=q;
 for(i=0;i<100;i++)
  q[i]=0;
 printf("请输入字符串\n");
    scanf("%[^\n]", q);
 for(i=0;i<100;i++)
 {
  if(*p==0)
  {
   e++;f++;
  }
  else
  {
   f=0;
  if(*p>64&&*p<91)
   a++;
  else if(*p>96&&*p<123)
   b++;
  else if(*p==32)
   c++;
  else if(*p>47&&*p<58)
   d++;
  else e++;
  p++; 
  }
 }
 e=e-f;
 printf("该字符串中\n");
 printf("大写字母有%d个\n",a);
 printf("小写字母有%d个\n",b);
 printf("空格有%d个\n",c);
 printf("数字有%d个\n",d);
 printf("其他字符有%d个\n",e);
}
