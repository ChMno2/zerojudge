#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,cs=0;
	while(cin>>n&&n!=0)
	{
		if(cs)
			cout<<'\n';
		cs++;
		int num[n]={0};
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
		}
		for(int a=0;a<n-5;a++)
		{
			for(int b=a+1;b<n-4;b++)
			{
				for(int c=b+1;c<n-3;c++)
				{
					for(int d=c+1;d<n-2;d++)
					{
						for(int e=d+1;e<n-1;e++)
						{
							for(int f=e+1;f<n;f++)
							{
								cout<<num[a]<<" "<<num[b]<<" "<<num[c]<<" "
								<<num[d]<<" "<<num[e]<<" "<<num[f]<<endl;
							}
						}	
					}
				}
			}
		} 
		
	}
}
