#include<bits/stdc++.h>
using namespace std;
int main()
{
	double h,u,d,f;
	while(cin>>h>>u>>d>>f&&h!=0)
	{
		double sum=0,count=0;
		double day;
		double speed=u;
		while(true)
		{
			
			if(speed>0)
				sum+=speed;

			count+=1;
			if(sum>h)
			{
				cout<<"success on day "<<count<<endl;
				break; 
			}
			speed-=u*f/100;
			sum-=int(d);
		
			if(sum<0)
			{
				cout<<"failure on day "<<count<<endl;
				break;
			}
			
			
		}
	}

}
