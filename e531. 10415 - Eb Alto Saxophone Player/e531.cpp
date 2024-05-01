#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int c[10]={0,1,1,1,0,0,1,1,1,1},
		d[10]={0,1,1,1,0,0,1,1,1,0},
		e[10]={0,1,1,1,0,0,1,1,0,0},
		f[10]={0,1,1,1,0,0,1,0,0,0},
		g[10]={0,1,1,1,0,0,0,0,0,0},
		a[10]={0,1,1,0,0,0,0,0,0,0},
		b[10]={0,1,0,0,0,0,0,0,0,0},
		C[10]={0,0,1,0,0,0,0,0,0,0},
		D[10]={1,1,1,1,0,0,1,1,1,0},
		E[10]={1,1,1,1,0,0,1,1,0,0},
		F[10]={1,1,1,1,0,0,1,0,0,0},
		G[10]={1,1,1,1,0,0,0,0,0,0},
		A[10]={1,1,1,0,0,0,0,0,0,0},
		B[10]={1,1,0,0,0,0,0,0,0,0};
	int ss[10]={0},tol[10]={0};
	vector<int> sss;
	int x;
	string z,y;
	cin>>x;
	cin.ignore();
	for(int i=0;i<x;i++)
	{
		getline(cin,z);
		for(int j=0;j<z.size();j++)
		{
			if(z[j]=='c')
			{
				for(int k=0;k<10;k++)
				{
					sss.push_back(c[k]);
					if(ss[k]==0&&sss[k]==1)
					{
						tol[k]++;
						
					}
					ss[k]=sss[k];
				}
				sss.clear();
			}
			
			else if(z[j]=='d')
			{
				for(int k=0;k<10;k++)
				{
					sss.push_back(d[k]);
					if(ss[k]==0&&sss[k]==1)
					{
						tol[k]++;
						
					}
					ss[k]=sss[k];
				}
				sss.clear();
			}
			else if(z[j]=='e')
			{
				for(int k=0;k<10;k++)
				{
					sss.push_back(e[k]);
					if(ss[k]==0&&sss[k]==1)
					{
						tol[k]++;
						
					}
					ss[k]=sss[k];
				}
				sss.clear();
			}
			else if(z[j]=='f')
			{
				for(int k=0;k<10;k++)
				{
					sss.push_back(f[k]);
					if(ss[k]==0&&sss[k]==1)
					{
						tol[k]++;
						
					}
					ss[k]=sss[k];
				}
				sss.clear();
			}
			else if(z[j]=='g')
			{
				for(int k=0;k<10;k++)
				{
					sss.push_back(g[k]);
					if(ss[k]==0&&sss[k]==1)
					{
						tol[k]++;
						
					}
					ss[k]=sss[k];
				}
				sss.clear();
			}
			else if(z[j]=='a')
			{
				for(int k=0;k<10;k++)
				{
					sss.push_back(a[k]);
					if(ss[k]==0&&sss[k]==1)
					{
						tol[k]++;
						
					}
					ss[k]=sss[k];
				}
				sss.clear();
			}
			else if(z[j]=='b')
			{
				for(int k=0;k<10;k++)
				{
					sss.push_back(b[k]);
					if(ss[k]==0&&sss[k]==1)
					{
						tol[k]++;
						
					}
					ss[k]=sss[k];
				}
				sss.clear();
			}
			else if(z[j]=='C')
			{
				for(int k=0;k<10;k++)
				{
					sss.push_back(C[k]);
					if(ss[k]==0&&sss[k]==1)
					{
						tol[k]++;
						
					}
					ss[k]=sss[k];
				}
				sss.clear();
			}
			else if(z[j]=='D')
			{
				for(int k=0;k<10;k++)
				{
					sss.push_back(D[k]);
					if(ss[k]==0&&sss[k]==1)
					{
						tol[k]++;
						
					}
					ss[k]=sss[k];
				}
				sss.clear();
			}
			else if(z[j]=='E')
			{
				for(int k=0;k<10;k++)
				{
					sss.push_back(E[k]);
					if(ss[k]==0&&sss[k]==1)
					{
						tol[k]++;
						
					}
					ss[k]=sss[k];
				}
				sss.clear();
			}
			else if(z[j]=='F')
			{
				for(int k=0;k<10;k++)
				{
					sss.push_back(F[k]);
					if(ss[k]==0&&sss[k]==1)
					{
						tol[k]++;
						
					}
					ss[k]=sss[k];
				}
				sss.clear();
			}
			else if(z[j]=='G')
			{
				for(int k=0;k<10;k++)
				{
					sss.push_back(G[k]);
					if(ss[k]==0&&sss[k]==1)
					{
						tol[k]++;
						
					}
					ss[k]=sss[k];
				}
				sss.clear();
			}
			else if(z[j]=='A')
			{
				for(int k=0;k<10;k++)
				{
					sss.push_back(A[k]);
					if(ss[k]==0&&sss[k]==1)
					{
						tol[k]++;
						
					}
					ss[k]=sss[k];
				}
				sss.clear();
			}
			else if(z[j]=='B')
			{
				for(int k=0;k<10;k++)
				{
					sss.push_back(B[k]);
					if(ss[k]==0&&sss[k]==1)
					{
						tol[k]++;
						
					}
					ss[k]=sss[k];
				}
				sss.clear();
			}			
		}
		for(int u=0;u<10;u++)
		{
			cout<<tol[u]<<" ";
			tol[u]=0;
			ss[u]=0;
		}
		cout<<endl;
		
	}
}
