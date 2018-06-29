#include <stdio.h>
void sort(char s[], int n);                      //定义排序函数
int main()
{
    char str[10];
    printf("Please enter 10 charactor: ");       //输入10个字符
    gets(str);
    sort(str, 10);                               //调用排序函数
    return 0;
}
//排序函数（起泡法）
void sort(char s[], int n)
{
    for (int i=0; i<n; i++)
        for (int j=i+1, t; j<n; s[i]>s[j]?t=s[j],s[j++]=s[i],s[i]=t:j++);
    printf("Sort array: ");
    puts(s);
}
