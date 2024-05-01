#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	while(cin>>a&&a)
	{
		int top=1,right=4,up=2,step=0;
		for(int i=0;i<a;i++)
		{
			string b;
			cin>>b;
			
			if(b=="west")//向西 
			{
				step=top;
				top=right;
				right=7-step;
			}
			else if(b=="north")//向北 
			{
				step=top;
				top=7-up;
				up=step;
			}
			else if(b=="east")//向東 
			{
				step=top;
				top=7-right;
				right=step;
			}
			else if(b=="south")//向南 
			{
				step=top;
				top=up;
				up=7-step;
			}
		
		}	
		cout<<top<<endl;
		
	}
} 
