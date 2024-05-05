#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	vector<int>c;
	cin>>a;
	int t=a;
	while(a--)
	{
		cin>>b;
		c.push_back(b);
	}
	sort(c.begin(),c.end());
	cout<<c[0]<<" "<<c[c.size()-1]<<" ";
	if(c[c.size()-1]-c[0]==t-1)
	{
		cout<<"yes"<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}
} 
