#include<bits/stdc++.h>
using namespace std;
const int maxn=1005;
int dp[maxn][maxn];

int main()
{
	int N,M,C=1;
	while(cin>>N>>M)
	{
		memset(dp,0,sizeof(dp));//歸零 
		int dp[N][M];
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<M;j++)
			{
				cin>>dp[i][j];
			}
		}
		for(int i=1;i<N;i++)
		{
			dp[i][0]+= dp[i-1][0];
		}
		for(int i=1;i<M;i++)
		{
			dp[0][i]+= dp[0][i-1];
		}
		for(int i=1;i<N;i++)
		{
			for(int j=1;j<M;j++)
			{
				dp[i][j]+=min(dp[i-1][j],dp[i][j-1]);	
			}			
		}
		cout<<"Case #"<<C<<" :\n"<<dp[N-1][M-1]<<'\n';
		C++;
	} 
	return 0;
}
