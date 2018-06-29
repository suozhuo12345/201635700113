int main()

{
int d[10];

input(d);
change(d);
output(d);

return 0;
}

void input(int d[])
{
for(i=0;i<10;i++)
scanf("%d",&d[i]);
}

void change(int b[])
{
int temp,m=b[0],n=b[0],s,t;

for(i=0;i<10;i++){

if(m>b[i+1]){
m=b[i+1];
s=i+1;
}

if(n<b[i+1]){
n=b[i+1];
t=i+1;
}

}

temp=b[0];
b[0]=b[s];
b[s]=temp;

temp=b[9];
b[9]=b[t];
b[t]=temp;
}

void output(int c[])
{
for(i=0;i<10;i++)
printf("%d",c[i]);
}

建议程序：

#include <stdio.h>

int main(void)
{
    int a[10], max, min, temp;

    int i, j;

printf("please input 10 number:\n");

for( i = 0; i < 10; i++)

        scanf("%d", a++); #   a代表数组a的第一个参数的地址，所以无需要&

max = a[0];

    min = a[0];

for( i = 0; i < 10; i++){               #判断最大值所在的位置

if(a[i] > max){

                    max = a[i];

                    j = i;

            }
    }

temp = a[j];                    #把最大值与最后一位交换

            a[j]    = a[9]; 

            a[9]   = temp;

for( i = 0; i < 10; i++){         #判断最小一位的位置
        
            if(a[i] < min){

min = a[i];
                      j = i;

            }

        }

temp = a[j];              #交换第一位和最小值

            a[j]    = a[0];

            a[0]   = temp;

for(i = 0; i < 10; i++)

        printf("% ", a[i]);
}
