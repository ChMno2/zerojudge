#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	vector<string> lists;
	while(getline(cin,s))
	{
		bool tmp=false;
		for(auto ss:lists)
		{
			if(ss==s)
				tmp=true;
		}
		if(tmp)
		{
			cout<<"YES"<<endl;			
		}
		else
		{
			cout<<"NO"<<endl;
			lists.push_back(s);
		} 
	}
	return 0;
}
