#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int m;
		cin>>m;
		int tmp=m,b1=0;
		while(tmp>0)
		{
			if(tmp%2==1)
				b1++;
			tmp/=2;	
		}
		int b2=0;
		int hex[10]={0,1,1,2,1,2,2,3,1,2};
		string s=to_string(m);
		for(int i=0;i<s.size();i++)
		{
			b2+=hex[s[i]-'0'];
		}
		cout<<b1<<" "<<b2<<endl;
	}
}
