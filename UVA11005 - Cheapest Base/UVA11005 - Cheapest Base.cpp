#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int index=1;index<=t;index++)
    {
        if(index>1)
            cout<<endl;
        int money;
        map<int,int> mp;
        for(int i=0;i<36;i++)
        {
            cin>>money;
            mp[i]=money;
        }
        /*for(auto &p:mp)
            cout<<p.first<<" "<<p.second<<endl;*/
        cout<<"Case "<<index<<":"<<endl;
        int n,num;
        cin>>n;
        while(n--)
        {
            cin>>num;
            cout<<"Cheapest base(s) for number "<<num<<":";
            int mini=128;
            map<int,int> mp1;
            for(int i=2;i<=36;i++)
            {
                int tmp=num,sum=0;
                while(tmp>0)
                {
                    sum+=mp[tmp%i];
                    tmp/=i;
                }
                mp1[i]=sum;
                mini=min(mini,sum);
            }
            for(int i=2;i<=36;i++)
            {
                if(mp1[i]==mini)
                    cout<<" "<<i;
            }
            cout<<endl;
        }
    }
}
