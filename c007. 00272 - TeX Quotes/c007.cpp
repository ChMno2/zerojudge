#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	int k=1;
	while(getline(cin,a))
	{
		
		for(int i=0;i<a.size();i++)
		{
			if(a[i]!='\"')
			{
				cout<<a[i];
			}
			else
			{
				if(k%2==1)
				{
					cout<<"``";
					k++;
				}
				else
				{
					cout<<"''";
					k++;
				}
			}
		}
		cout<<endl;
	}
}
