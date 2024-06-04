#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int mx=0,total=0;
		for(int i=0;i<n;i++)
		{
			int s;
			cin>>s;
			total+=s;
			mx=max(mx,total);
			if(total<0)
				total=0;	
		}	
		cout<<mx<<endl;
	}
		
}
