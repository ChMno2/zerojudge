#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	while(getline(cin,s))
	{
		int sum=0;
		int temp=0;
		for(int i=0;i<s.size();i++)
		{
			if(isalpha(s[i])){
				temp=1;				
			}
			else{
				if(temp){
					sum+=1;
					temp=0;					
				}
			}
		}
		cout<<sum+temp<<endl;
	}

}
