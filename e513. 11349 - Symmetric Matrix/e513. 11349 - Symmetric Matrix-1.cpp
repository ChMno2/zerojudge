#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int index=1;index<=t;index++)
	{
		char c;
		long long n;
		cin>>c>>c>>n;
		long long a[n][n]={0};
		bool bl=true;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
				if(a[i][j]<0)
					bl=false;
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(a[i][j]!=a[n-1-i][n-1-j])
					bl=false;
			}
		}
		cout<<"Test #"<<index<<": ";
		if(bl)
			cout<<"Symmetric."<<endl;
		else
			cout<<"Non-symmetric."<<endl;
	}
}
