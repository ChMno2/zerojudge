#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cin.ignore();
	string s;

	while(n--)
	{
		map<char, int > mp;
		getline(cin,s);
		for(int i=0;i<s.size();i++)
		{
			if(isalpha(s[i]))
				mp[tolower(s[i])]++;
		}
		int mx=0;
		for(auto &ss:mp)
		{
			mx=max(mx,ss.second);
		}
		for(auto &ss:mp)
		{
			if(ss.second==mx)
			{
				cout<<ss.first;				
			}
		}
		cout<<endl;
	} 

}
