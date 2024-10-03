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
		string s=to_string(m);
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='1')
				b2+=1;
			else if(s[i]=='2')
				b2+=1;
			else if(s[i]=='3')
				b2+=2;
			else if(s[i]=='4')
				b2+=1;
			else if(s[i]=='5')
				b2+=2;
			else if(s[i]=='6')
				b2+=2;
			else if(s[i]=='7')
				b2+=3;
			else if(s[i]=='8')
				b2+=1;
			else if(s[i]=='9')
				b2+=2;
		}
		cout<<b1<<" "<<b2<<endl;
	}
}
