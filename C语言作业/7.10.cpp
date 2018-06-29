#include<stdio.h>
#include<string.h>
int main()
{
	int i,j=0,k;
	char a[80],b[80]={"\0"},c[80];//这里的b数组全部初始化\0
	gets(a);
	for(i=0;i<=(strlen(a));i++)
	{
		if(a[i]==' ' || a[i]=='\0')//判定a如果是空格和结束字符时
		{
			c[j]='\0';//c给一个结束符
			if(strlen(c)>strlen(b)) //判定c是否大于b,大于b时，将c的赋值给b
				for(k=0;k<strlen(c);k++)
					b[k]=c[k];
			j=0;//当a如果遇到空格或结束符时要将j变为0，让下一次的c从0开始
		}
		else
		{
			c[j]=a[i];
			j++;
		}
	}
	printf("%s\n",b);
	return 0;
}
