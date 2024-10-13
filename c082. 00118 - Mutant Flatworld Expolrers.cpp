#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int m,n;
	cin>>n>>m;
	int maap[m+2][n+2]={0};
	
	int x,y;
	char dir;
	string s;
	map<char,int> mp;
	mp['N']=0;
	mp['E']=1;
	mp['S']=2;
	mp['W']=3;
	
	int move[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
	while(cin>>x>>y>>dir>>s)
	{
		int dirct=mp[dir];
		int loss=0;
		for(int i=0;i<s.size();i++)
		{
			//x,y,dirct,map
			if(s[i]=='F')
			{
				
				int dx=x+move[dirct][0];
				int dy=y+move[dirct][1];
				if((dx>n||dx<0||dy>m||dy<0)&&maap[x][y]!=1)
				{
					char final;
					if(dirct==0)
						final='N';
					else if(dirct==1)
						final='E';
					else if(dirct==2)
						final='S';
					else if(dirct==3)
						final='W';
					cout<<x<<" "<<y<<" "<<final<<" LOST"<<endl;
					maap[x][y]=1;
					loss=1;	
					break;
				}
				else if(dx>=0&&dx<=n&&dy>=0&&dy<=m)
				{
					y=dy;
					x=dx;
				}
				
			}
			else if(s[i]=='R')
				dirct=(dirct+1)%4;
			else
			{
				dirct--;
				if(dirct==-1)
					dirct=3;
			}				
		}
		char final;
		if(dirct==0)
			final='N';
		else if(dirct==1)
			final='E';
		else if(dirct==2)
			final='S';
		else if(dirct==3)
			final='W';

		if(loss==0)
			cout<<x<<" "<<y<<" "<<final<<endl;
	}
		
		
	
	
}
