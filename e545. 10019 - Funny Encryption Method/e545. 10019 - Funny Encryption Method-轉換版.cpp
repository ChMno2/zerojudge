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
		int tmp1=0,b2=0;
		string s=to_string(m);
		for(int i=0;i<s.size();i++)
			tmp1+=(s[i]-'0')*pow(16,s.size()-1-i);
		while(tmp1>0)
		{
			if(tmp1%2==1)
				b2++;
			tmp1/=2;
		}
		cout<<b1<<" "<<b2<<endl;
	}
}
