#include "stdafx.h"
#include <iostream>
using namespace std;


int x;


int p(int n)
{
int a;
if(n==0)
{
a=1;
}
else if(n==1)
{
a=x;
}
else if(n>=1)
{
a=((2*n-1)*x-p(n-1)-((n-1)*p(n-2)))/n;
}
return a;
}
