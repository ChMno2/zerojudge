#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,index=1;
	while(cin>>n)
	{
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		map<int,int> mp;
		mp.clear();
		bool bl=true;
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j++)
			{
				mp[a[i]+a[j]]++;
				if(mp[a[i]+a[j]]>1)
				{
					bl=false;
					break;
				}
			}
			if(bl==false)
				break;
		}
		cout<<"Case #"<<index++<<": ";
		if(bl)
			cout<<"It is a B2-Sequence."<<endl;
		else
			cout<<"It is not a B2-Sequence."<<endl;
		cout<<endl;
	}
}
