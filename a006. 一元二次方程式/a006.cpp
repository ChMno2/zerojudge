#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;
int main(){
int a,b,c,d;
int x1,x2;
while(cin>>a>>b>>c)
{
if(b*b-4*a*c<0)
	cout<<"No real root"<<endl;
else if(b*b-4*a*c==0)
{
	cout<<"Two same roots x="<<-b/(a*2);
}
else if((b*b-4*a*c)>0)
{
	x1=(-b+sqrt(b*b-4*a*c))/(2*a);
	x2=(-b-sqrt(b*b-4*a*c))/(2*a);
}
if (x1>x2)
	cout<<"Two different roots x1="<<x1<<" , x2="<<x2;
if (x1<x2)
	cout<<"Two different roots x2="<<x2<<"x1="<<x1;
}
//sqrt(欲開根號的值，或變數)
return 0;
} 

