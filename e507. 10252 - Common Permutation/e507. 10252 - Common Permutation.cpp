#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    while(getline(cin,s1))
    {
        getline(cin,s2);
        int a[130]={},b[130]={};
        for(int i=0;i<s1.size();i++)
            a[s1[i]]++;
            
        for(int i=0;i<s2.size();i++)
            b[s2[i]]++;
            
        for(int i=0;i<130;i++)
        {
            for(int j=min(a[i],b[i]);j>0;j--)
            {
                if(i==32)
                    continue;
                else
                    cout<<char(i);
            }
        }
        cout<<endl;
    }
}
