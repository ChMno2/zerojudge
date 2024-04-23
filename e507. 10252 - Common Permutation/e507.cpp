#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	vector<char> c;
	while(cin>>a>>b)
	{
		c.clear();
		for(int i=0;i<a.size();i++)	
		{
			for(int j=0;j<b.size();j++)
			{
				if(a[i]==b[j])
				{
				
					c.push_back(a[i]);
					b.erase(j,1);
					break;					
				}
			}
		}
		sort(c.begin(),c.end());
		for(int i=0;i<c.size();i++)
		{
			cout<<c[i];
		}
		cout<<endl;
	}	
}
