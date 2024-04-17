
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int cs;
    cin>>n;
    
    for(int i=0;i<n;i++)
	{
        cin>>cs;
        vector<int> amount(cs);
        int sum=0;
        for(int i=0;i<cs;i++)
        {
            cin>>amount[i];
        }
        sort(amount.begin(),amount.end());
        for(int i=amount.size()-3;i>=0;i-=3)
        {
        	sum+=amount[i];
		}
		cout<<sum<<endl;
        
    }
}
