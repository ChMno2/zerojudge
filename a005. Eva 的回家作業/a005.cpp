#include<iostream>
using namespace std;
int main(){
int t;
int i,a,b,c,d=0,e,f;
while(cin>>t)
{ 
while(t-->=1)
{
	cin>>a>>b>>c>>d;
	if(b-a==c-b)
		e=2*d-c; 
	else if (c/b==b/a)
		e=d*(c/b);
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
	cout<<endl;
}
}
return 0;
} 





