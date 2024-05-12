#include<bits/stdc++.h>
using namespace std;
int d[10005],p[10005],a[10005];

bool bmp(int x,int y)
{
	return d[x]<d[y];
}
int main()
{
	int n;
	while(cin>>n)
	{
		int ans=0;
		for(int i=0;i<n;i++)
		{
			a[i]=i;
			cin>>d[i]>>p[i];
		}
		sort(a,a+n,bmp);
		priority_queue<int ,vector<int>,greater<int>> pq;
		for(int i=0;i<n;i++)
		{
			if(d[a[i]]>pq.size())
			{
				ans+=p[a[i]];
				pq.push(p[a[i]]);		
			}
			else if(d[a[i]]==pq.size()&&p[a[i]]>pq.top())
			{
				ans-=pq.top();
				pq.pop();
				ans+=p[a[i]];
				pq.push(p[a[i]]);	
			}	
		}		
		cout<<ans<<endl;
	}
}
