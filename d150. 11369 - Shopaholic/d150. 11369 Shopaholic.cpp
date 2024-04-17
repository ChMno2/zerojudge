/*
解題想法:使用greedy貪心法，先將每一個商品價格輸入進vector再進行sort，每三個商品取當中最小值即為免費商品
*/
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
