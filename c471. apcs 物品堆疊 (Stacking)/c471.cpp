/*
p1 放在 p2 的上方：w1 * f2
p2 放在 p1 的上方：w2 * f1
物品兩兩比較後，依最省力的方式排序。

*/
#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<long long,long long>wf1,pair<long long,long long>wf2)
{
	return wf1.first*wf2.second>wf1.second*wf2.first;
}
int main()
{
    int n;
    while(cin>>n)
    {
    	pair<long long ,long long>wf[n];
    	
	    for(int i=0;i<n;i++)
	    {
			cin>>wf[i].first;	
		}
	    for(int i=0;i<n;i++)
	    {
			cin>>wf[i].second;
		}
    	
    	sort(wf,wf+n,cmp);
    	long long int w=0,ans=0;
		for(int i=1;i<n;i++)
    	{
    		w+=wf[i-1].second;
    		ans+=w*wf[i].first;
		}
		cout<<ans<<endl;
	}
}
