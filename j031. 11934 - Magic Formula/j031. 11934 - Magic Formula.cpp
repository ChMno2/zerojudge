#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,l;
	while(cin>>a)
	{
		cin>>b>>c>>d>>l;
		if((a||b||c||d||l)==0)
			break;
		int ans=0;
		for(int i=0;i<=l;i++)
		{
			if((a*i*i+b*i+c)%d==0)
				ans++;
		}
		cout<<ans<<endl;
	}
} 
