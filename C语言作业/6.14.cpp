include "stdio.h" 

main() 
{ char s1[100],s2[100];int i; 
printf("input string s1:\n"); 
gets(s1); 
printf("input string s2:\n"); 
gets(s2); 

for(i=0;s1[i]!='\0' && s2[i]!='\0';i++) 
{ 
if(s1[i]==s2[i]) 
continue; 
if(s1[i]<s2[i]) 
{printf(" s1 < s2 : -%d\n",abs(s1[i]-s2[i])); break;} 
else 
{printf(" s1 > s2 : %d\n",abs(s1[i]-s2[i])); break;} 
} 
if(s1[i]==s2[i]) 
printf(" s1 = s2\n"); 
}
