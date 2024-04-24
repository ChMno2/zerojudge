#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	string s;
	while(cin>>s)
	{
		int sum=0,y=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='y')
			{
				sum+=abs(i-y);
				y+=3;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
