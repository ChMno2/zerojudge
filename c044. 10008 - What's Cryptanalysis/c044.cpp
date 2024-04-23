#include<bits/stdc++.h>
using namespace std;
int cmp(const pair<string, int>& x, const pair<string, int>& y)  
{  
    return x.second > y.second;  
} 
int main()
{
	int a;
	cin>>a;
	cin.ignore();
	map<char,int> w;
	map<char,int> :: iterator q;
	for(int i=0;i<a;i++)
	{
		string s;
		getline(cin,s);
		
		
		for(int j=0;j<s.size();j++)
		{
			if(toupper(s[j])>='A'&&toupper(s[j])<='Z')
			{
				w[toupper(s[j])]++;			
			}
		}		
	} 
	&q=w;
	sort(q.begin();q.end(),cmp);
	for(auto &s:w)
	{
		for(int r=1000;r>0;r--)
		{	
			if(r==s.second)
			{
				cout<<s.first<<" "<<s.second<<endl;
			}
		}
	}
}
