#include<stdio.h>
int main()
 {float score;
 char grade;
 printf("������ѧ���ɼ�:");
 scanf("%f",&score);
 while(score>100||score<0)
 {printf("\n��������������");
 scanf("%f",&score);
 }
 switch((int)(score/10))
 {case10:
 case9:grade='A';break;
 case8:grade='B';break;
 case7:grade='C';break;
 case6:grade='D';break;
 case5:
 case4:
 case3:
 case2:
 case1:
 case0:grade='E';
 }
 printf("�ɼ���%5.if,��Ӧ�ĵȼ���%c\n",score,grade);
 return 0;
 }
