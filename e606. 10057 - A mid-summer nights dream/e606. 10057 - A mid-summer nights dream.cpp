#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,num;
    vector<int> v;
    while(cin>>n)
    {
        int a1=0,a2=0,a3=0,tmp=0;
        v.clear();
        for(int i=0;i<n;i++)
        {
            cin>>num;
            v.push_back(num);
        }
        sort(v.begin(),v.end());
        int count=0;
        if(n%2==1)
        {
            a1=v[n/2];
            for(int i=0;i<v.size();i++)
            {
                if(v[i]==a1)
                    a2++;    
            }
            a3++;
        }
        else
        {
            tmp=v[n/2];
            a1=v[n/2-1];
            for(int i=0;i<v.size();i++)
            {
                if(v[i]==a1||v[i]==tmp)
                    a2++;    
            }
            if(tmp>a1)
                a3=tmp-a1+1;
            else if(tmp==a1)
            {
                a3++;
            }
        }
        cout<<a1<<" "<<a2<<" "<<a3<<endl;
    }
}
