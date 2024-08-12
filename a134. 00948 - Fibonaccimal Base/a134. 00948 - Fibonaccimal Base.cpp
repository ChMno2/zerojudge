#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long fib[40];
    fib[0]=1;
    fib[1]=2;
    for(int i=2;i<40;i++)
        fib[i]=fib[i-1]+fib[i-2];
    
    int n;
    cin>>n;
    while(n--)
    {
        int num,count=0;
        cin>>num;
        cout<<num<<" = ";
        while(num!=0)
        {
            for(int i=39;i>=0;i--)
            {
                if(num>=fib[i])
                {
                    cout<<"1";
                    num-=fib[i];
                    count++;
                }
                else
                {
                    if(count!=0)
                        cout<<"0";
                    else
                        continue;
                }
            }
        }
        cout<<" (fib)"<<endl;
    }
}
