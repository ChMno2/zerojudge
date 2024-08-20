#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,index=0;
	while(cin>>n)
	{
		int tmp=0,a[n];
		vector<int> v;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				tmp=a[i]+a[j];
				if(a[i]<=a[j])
					v.push_back(tmp);
			}
		}
		sort(v.begin(),v.end());
		bool bl=true;
		for(int i=0;i<v.size()-1;i++)
		{
			for(int j=i+1;j<v.size();j++)
			{
				if(v[i]==v[j])
				{
					bl=false;
					break;
				}
			}
		}
		cout<<"Case #"<<++index;
		if(bl)
			cout<<": It is a B2-Sequence."<<endl;
		else
			cout<<": It is not a B2-Sequence."<<endl;
		cout<<endl;
	}
}
