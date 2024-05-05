#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		
		if(n==0)
			break;
		bool f=false;
		for(int b=1234;b<=98765/n;b++)
		{
			
			set<int> tp;
			int a=b*n,c=b,d=0,e=a;
			int z=1,w=1;
			while(a>0)
			{
				tp.insert(a%10);
				a/=10;
			}
			while(c>0)
			{
				tp.insert(c%10);
				c/=10;
			}
			if(b<10000||b%10==0||e%10==0)
				tp.insert(0);
			if(tp.size()==10)
			{
				f=true;
				if(b<10000)
					cout<<e<<" / 0"<<b <<" = "<<n<<endl;
				else
					cout<<e<<" / "<<b <<" = "<<n<<endl;	
			}
						
		}
		if(f==false)
		{
			cout<<"There are no solutions for "<<n<<".\n";
		}
	}

}
