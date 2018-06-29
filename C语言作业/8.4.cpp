#include<stdio.h>
# define N 10
void main()
{
    int a[N]={1,2,3,4,5,6,7,8,9,10};
    int n,i;
    void change(int *a,int n);
 
    printf("原数组为：");
    for(i=0;i<N;i++)
        printf("%d ",a[i]);
    printf("\n");
 
    printf("请输入数n：");
    scanf("%d",&n);
    change(a,n);
 
    printf("结果为：");
    for(i=0;i<N;i++)
        printf("%d ",a[i]);
    printf("\n");
}
 
void change(int *a,int n)
{
    int m, i, p;
    for(i=0;i<n;i++)
    {
        p=a[0];
        for(m=0;m<N-1;m++)
        {
            a[m]=a[m+1];
        }
        a[9]=p;
    }
}
