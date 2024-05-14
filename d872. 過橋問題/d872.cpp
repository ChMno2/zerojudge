#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    while(cin>>t)
    {
    	if (t == 0){
            cout << 0 << "\n";
            continue;
        }
    	vector<int> n(t);
    	for(int i=0;i<t;i++)
    	{
    		cin>>n[i];
		}
		sort(n.begin(),n.end());
		int ans=0;
		while(n.size()>3)
		{
			int x=n[0]+2*n[1]+n[n.size()-1];
			int y=2*n[0]+n[n.size()-1]+n[n.size()-2];
			ans+=min(x,y);
			n.resize(n.size()-2); 
		}
		if(n.size()==3)
		{
			for(int i:n)
			{
				ans+=i;
			}
		}
		else if(n.size()==2)
		{
			ans+=n[1];
		}
		else
		{
			ans+=n[0];
		}
		cout<<ans<<endl;
	}
    
}
