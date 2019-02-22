#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int i,j,k;
	int flag1=0;
	int flag2=0;
	for(i=0;i<=a/2;i++)
	{
		flag1=0;
		flag2=0;
		for(j=2;j<i/2;j++)
		{
			if(i%j==0)
			{
				flag1=1;
				break;
			}
		}
		for(j=2;j<(a-i)/2;j++)
		{
			if((a-i)%j==0)
			{
				flag2=1;
				break;
			}
		}
		if(flag1==0&&flag2==0)
		{
			cout<<i<<"+"<<a-i<<"="<<a<<endl;
		}
		
		
	}
}
//
