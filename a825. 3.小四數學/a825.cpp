#include<bits/stdc++.h>
using namespace std;
bool bmp(int a,int b)
{
	return a>b;
}
int main()
{
	int n;
	int b;
	vector<int> lt;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>b;
		lt.push_back(b); 
	}
	sort(lt.begin(),lt.end(),bmp);
	int x=0,y=0;
	for(int i=0;i<lt.size();i++)
	{
		if(x<y)
		{
			x=10*x+lt[i];
		}
		else
		{
			y=y*10+lt[i];
		}
	}	
	cout<<x*y<<endl;
} 
