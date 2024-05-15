#include<bits/stdc++.h>
using namespace std;
int main()
{
	int day[12]={10,21,7,4,9,6,11,8,5,10,7,12};
	string week[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	
	int t,m,d;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>m>>d;
		int index;
		index=d-day[m-1];
		if(index>=0)
		{
			index%=7;
		}
		else
		{
			while(index<0)
				index+=7;
			index%=7;
		}
		cout<<week[index]<<endl;
	}
}
