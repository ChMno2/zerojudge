#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,d;
    cin>>n;
    while(n--)
    {
        int s1,s2;
        cin>>s>>d;
        s1=(s+d)/2;
        s2=s1-d;
        if(s2<0)
            cout<<"impossible"<<endl;
        else if(s1+s2!=s)
            cout<<"impossible"<<endl;
        else
            cout<<s1<<" "<<s2<<endl;
    }
}
