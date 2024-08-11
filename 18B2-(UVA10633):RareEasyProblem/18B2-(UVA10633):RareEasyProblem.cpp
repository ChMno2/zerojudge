#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll s;
	while(cin>>s&&s!=0)
	{
		ll count=0;
		if(s%9==0)
			cout<<s*10/9-1<<" "<<s*10/9<<endl;
		else
			cout<<s*10/9<<endl;
	}
}


