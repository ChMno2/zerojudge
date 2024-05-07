#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	while(getline(cin,a))
	{
		sort(a.begin(),a.end());
		vector<char>b;
		vector<int> c;
		b.push_back(a[0]);
		c.push_back(1);
		for(int i=1;i<a.size();i++)
		{
			int temp=1;
			for(int j=0;j<b.size();j++)
			{
				
				if(a[i]==b[j])
				{
					temp=0;
					c[j]+=1;	
				}
			}
			if(temp)
			{
				b.push_back(a[i]);
				c.push_back(1);
			}
		}
		for(int j=1;j<a.size();j++)
		{
			for(int i=b.size()-1;i>=0;i--)
			{
				if(c[i]==j)
				{
					cout<<int(b[i])<<" "<<c[i]<<endl;
				}
			}
		}
		cout<<endl<<endl;
	}
}
