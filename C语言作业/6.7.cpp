#define N 3       //NÎª½×Êý
#include <stdio.h>
int main(void)
{
 int a[N][N]={0};
 int i,j,n;
 i=0;
 j=(N-1)/2;
 n=0;
 while(n<N*N)
    {
       n++;
       a[i][j]=n;
       j=(j+1+N)%N;
       i=(i-1+N)%N;
       if(a[i][j]!=0)
          {    
	 j=(j-1+N)%N;
                 i=(i+2+N)%N;
           }
  }
 printf("\n");
 for(i=0;i<N;i++)
    {
          for(j=0;j<N;j++)
          printf("%4d",a[i][j]);
          printf("\n");
    }
getchar();
}
