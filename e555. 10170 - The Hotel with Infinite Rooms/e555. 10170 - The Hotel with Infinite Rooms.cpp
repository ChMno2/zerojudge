#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long s,d;
	while(cin>>s>>d)
	{
		long long stay=s;
		while(stay<d)
		{
			s++;
			stay+=s;
		}
		cout<<s<<endl;
	}
}
