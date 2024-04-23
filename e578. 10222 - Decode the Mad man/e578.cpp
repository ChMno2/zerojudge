#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	string b="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
			//`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./
	while(getline(cin,a))
	{
		for(int i=0;i<a.size();i++)
		{
			if(a[i]==' ')
			{
				cout<<a;
			}
			else
			{
				cout<<b[b.find(tolower(a[i]))-2];
			}	
		}
	
	}
	
	
	
}
