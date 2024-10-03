#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long fib[40];
	fib[0]=1;
	fib[1]=2;
	for(int i=2;i<40;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
	}
	int n,num;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		bool bl=false;
		cin>>num;
		cout<<num<<" = ";
		for(int j=39;j>=0;j--)
		{
			if(num>=fib[j])
			{
				num-=fib[j];
				cout<<"1";
				bl=true;
			}
			else
			{
				if(bl)
					cout<<"0";
				else
					continue;
			}
		}
		cout<<" (fib)"<<endl;
	}
}
