//暴力搜尋法
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[7]={1,2,3,4,5,6,7};
	int guess[6][6],ans[6];
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			cin>>guess[i][j];
		}
		cin>>ans[i];
	}
	while(next_permutation(a,a+6))
	{
		int i;
		for(i=0;i<6;i++)
		{
			int c=0;
			for(int j=0;j<6;j++)
			{
				c+=guess[i][j]==a[j];
			}
			if(c!=ans[i])
				break;
		}
		if(i==6)//猜測都正確
		{
			break;
		} 
	}

	for(int i=0;i<6;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
