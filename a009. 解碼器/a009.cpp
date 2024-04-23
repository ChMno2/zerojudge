//1JKJ'pz'{ol'{yhklthyr'vm'{ol'Jvu{yvs'Kh{h'Jvywvyh{pvu5
//*CDC is the trademark of the Control Data Corporation.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
int a,b,s=0;
while(cin>>a)
{
	while(a%2==0)
	{
		b=a/2;
		a=b;
		s+=1;
	}
	cout<<s;
	
}
return 0;
} 

