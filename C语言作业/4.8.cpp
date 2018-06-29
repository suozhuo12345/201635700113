#include<stdio.h>
int main()
 {float score;
 char grade;
 printf("请输入学生成绩:");
 scanf("%f",&score);
 while(score>100||score<0)
 {printf("\n输入有误，请重输");
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
 printf("成绩是%5.if,相应的等级是%c\n",score,grade);
 return 0;
 }
