#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a,b;
		map <int, map<int ,int> > pr;
		int ans=0;
		for(int i=0;i<n;i++)
		{
			cin>>a>>b;
			// mp是否大於1   mp[b][a]存在  mp[b][a]還沒被對應 
			if(pr.count(b)&& pr[b][a]>0&&pr[b].count(a))
			{
				pr[b][a]-=1;
				ans+=1;
			}
			else{
				if(!pr.count(a)|| !pr[a].count(b)){
					pr[a][b]=1;				
				}
				else{
					pr[a][b]+=1;						
				}
				
			}
		}
		cout<<ans<<endl;
	}	
} 
