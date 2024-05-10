#include<bits/stdc++.h>
using namespace std;
bool bmp(pair<int ,char> a,pair<int,char>b)
{
	if(a.first!=b.first)
		return a.first>b.first;
	else
		return a.second<b.second;
}
int main()
{
	vector<pair<int,char>> v(26);
	//{0, 'A'}, {0, 'B'}, {0, 'C'}, ..., {0, 'Z'}
	for(int i=0;i<26;i++)
	{
		v[i]={0,'A'+i};
	}
	int n;
	string s;
	cin>>n;
	cin.ignore();
	while(n--)
	{
		getline(cin,s);
		for(int i=0;i<s.size();i++)
		{
			if('A'<=s[i]&&s[i]<='Z')
			{
				v[s[i]-'A'].first++;
			}
			if('a'<=s[i]&&s[i]<='z')
			{
				v[s[i]-'a'].first++;
			}
		}
	}
	sort(v.begin(),v.end(),bmp);
	for(auto & i:v)
	{
		if(i.first>0)
			cout<<i.second<<" "<<i.first<<endl;
	}
}
