#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int M,D,s;
while(cin>>M>>D)
{ 
	s=(M*2+D)%3;
	if (s==0)
	cout<<"普通"<<endl;
	if (s==1)
	cout<<"吉"<<endl;
	if (s==2)
	cout<<"大吉"<<endl;
} 
return 0;

}






