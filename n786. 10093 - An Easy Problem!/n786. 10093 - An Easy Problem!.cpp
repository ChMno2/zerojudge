#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	while(getline(cin,s))
	{
		int mx=1,sum=0;
		for(int i=0;i<s.size();i++)
		{
			int tmp=0;
			if(s[i]>='0'&&s[i]<='9')
				tmp=s[i]-'0';
			else if(s[i]>='A'&&s[i]<='Z')
				tmp=s[i]-'A'+10;
			else if(s[i]>='a'&&s[i]<='z')
				tmp=s[i]-'a'+36;
			if(mx<tmp)
				mx=tmp;
			sum+=tmp;
		}
		int i;
		for(i=mx;i<62;i++)
		{
			if(sum%i==0)
			{
				cout<<i+1<<endl;
				break;
			}
		}
		if(i==62)
			cout<<"such number is impossible!"<<endl;
	}
}
