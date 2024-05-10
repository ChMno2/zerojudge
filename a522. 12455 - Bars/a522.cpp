#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,p;
		cin>>n>>p;
		int s;
		int dp[1001]={0};
		dp[0]=1;
		for(int i=0;i<p;i++)
		{
			cin>>s;
			for(int i=1000;i>=s;i--)
			{
				dp[i]+=dp[i-s];
			}
		} 
		if(dp[n])
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
