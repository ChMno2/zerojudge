#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	while(cin>>s)
	{
		
		if(s[0]=='0'&&s.length()==1)
			break;
		//每20一循環
		int digit[20]={0,1,5,2,8,3,9,2,8,7,7,8,4,7,3,8,4,1,5,4};
		int number = s[s.length()-1]-'0';
		//因為可以mod20，因此判斷兩位數即可
		if(s.length()>1)
		{
			number += (s[s.length()-2]-'0')*10;
		}
		//每20次數值就會加4
		int ans = digit[number%20]+(number/20)*4;
		cout<<ans%10<<endl;
	}
}
// 0152839287 7847384154
// 4596273621 1281728598
// 8
