#include<bits/stdc++.h>
using namespace std;
//當人數n >= 4, 有兩種策略(選擇(1)(2)兩個方案中時間較短的)：
//1. (AB)一起過橋 -> A帶回手電筒 -> (YZ)一起過橋 -> B帶回手電筒：花費時間 B+A+Z+B。
//2. (AZ)一起過橋 -> A帶回手電筒 -> (AY)一起過橋-> A帶回手電筒：花費時間 Z+A+Y+A。
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
