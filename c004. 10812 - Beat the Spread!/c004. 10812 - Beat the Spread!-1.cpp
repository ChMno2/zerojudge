#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s,d;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>s>>d;
		a=(s+d)/2;
		b=s-a;
		if(b<0)
			cout<<"impossible"<<endl;
		else if(a-b!=d)
			cout<<"impossible"<<endl;
		else
			cout<<a<<" "<<b<<endl;
	}
}
