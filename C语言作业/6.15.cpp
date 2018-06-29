#include <stdio.h>
int main()
{
    char s1[20]="How are you", s2[5]="what";
    puts(s1);
    for (int i=0; i<5; s1[i++]=s2[i]);
    puts(s1);
    return 0;
}
