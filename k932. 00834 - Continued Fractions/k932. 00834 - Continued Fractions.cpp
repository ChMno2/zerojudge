#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,b;
	while(cin>>a>>b){
		cout<<"["<<a/b<<";";
		int tmp=0;
		while(a%b!=0)
		{
			if(tmp)
				cout<<",";
			tmp=a%b;
			a=b;
			b=tmp;
			cout<<a/b;
		}
		cout<<"]"<<endl;
	}

}
