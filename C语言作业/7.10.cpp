#include<stdio.h>
#include<string.h>
int main()
{
	int i,j=0,k;
	char a[80],b[80]={"\0"},c[80];//�����b����ȫ����ʼ��\0
	gets(a);
	for(i=0;i<=(strlen(a));i++)
	{
		if(a[i]==' ' || a[i]=='\0')//�ж�a����ǿո�ͽ����ַ�ʱ
		{
			c[j]='\0';//c��һ��������
			if(strlen(c)>strlen(b)) //�ж�c�Ƿ����b,����bʱ����c�ĸ�ֵ��b
				for(k=0;k<strlen(c);k++)
					b[k]=c[k];
			j=0;//��a��������ո�������ʱҪ��j��Ϊ0������һ�ε�c��0��ʼ
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
