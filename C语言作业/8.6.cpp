#include <iostream>
using namespace std;
int main()
{
	int size(char*); // 有些编译器会把char[] 和char*加以区分
	const int N=20;
	char str[N];
	int i,n;
	cout<<"input a string:"<<endl;
	cin>>str; // 输入一次就可以了
	n=size(str);
	cout<<"the size of the string is:"<<n<<endl;
	return 0;
}

int size(char *p)
{
	int n=0;
	while(*(p)!='\0')
	{
		p++;
		n++;
	}
	return n;
}
