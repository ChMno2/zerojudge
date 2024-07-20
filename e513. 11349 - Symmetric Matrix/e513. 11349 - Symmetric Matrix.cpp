#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	for(int e=1;e<=a;e++)
	{
		char b;
		cin>>b>>b;
		int c;
		cin>>c;
		long long n[c][c]={0};
		int ans=0;
		for(int i=0;i<c;i++){
			for(int j=0;j<c;j++)
			{
				cin>>n[i][j];
				
			}
		}
		for(int i=0;i<c;i++){
			for(int j=0;j<c;j++)
			{
				if(n[i][j]!=n[c-1-i][c-j-1]||(n[i][j]<0))
					ans++;
		
			}
		}
		cout<<"Test #"<<e<<": "	;
		if(ans)
			cout<<"Non-symmetric."<<endl;
		else
			cout<<"Symmetric."<<endl;
	
	}

}
