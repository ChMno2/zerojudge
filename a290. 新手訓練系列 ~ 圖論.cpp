#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    while(n--)
    {
    	int m;
    	cin>>m;
    	vector<int>v[801];
		while(m--)
    	{
    		int a,b;
    		cin>>a>>b;
    		if(a!=b)
    			v[a].push_back(b);
		}
		queue<int >q;
		int visit[801]={};
		int A,B;
		cin>>A>>B;
		q.push(A);
		visit[A]=1;
		while(!q.empty())
		{
			int num=q.front();
			q.pop();
			for(int j=0;j<v[num].size();j++)
			{
				if(visit[v[num][j]]!=1)
				{
					visit[v[num][j]]=1;
					q.push(v[num][j]);
				}
			}
		}
		if(visit[B]==1)
		{
			cout<<"Yes!!!"<<endl;
		}
		else
		{
			cout<<"No!!!"<<endl;
		}
	}
	
	
    
    return 0;
}
