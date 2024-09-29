#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	string s;
	while(cin>>x)
	{
		cin.ignore();
		getline(cin,s);
		vector<int> v;
		stringstream ss;
		v.clear();
		ss.clear();
		ss<<s;
		int a;
		while(ss>>a)
			v.push_back(a);
		int sum=0,index=v.size()-1;
		for(int i=0;i<v.size()-1;i++)
		{
			sum+=v[i]*index*pow(x,index-1);
			index--;
		}
		cout<<sum<<endl;
	}
}
