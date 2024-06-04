解題思路:
為求最大區段和，每加入一個區段時判斷是否超過最大值，若total<0則歸0
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
