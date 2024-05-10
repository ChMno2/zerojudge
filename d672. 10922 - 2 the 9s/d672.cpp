#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int sum=10,tmp=0;
	while(cin>>s&&s!="0")
	{
		int e=true;
		tmp=0;
		sum=0;
		for(int i=0;i<s.size();i++)
		{
			sum+=int(s[i]-'0');
		}

		tmp++;
		int t=sum;
		while(t/10)
		{
			if(t%9!=0)
				e=false;
			sum=t;
			t=0;
			while(sum/10)
			{
				t+=sum%10;
				sum/=10;
			}
			t+=sum%10;
			tmp++;
		}
		
		if(e)
			cout<<s<<" is a multiple of 9 and has 9-degree "<<tmp<<"."<<endl;
		else
			cout<<s<<" is not a multiple of "<<9<<"."<<endl;
		
	}
	
}
