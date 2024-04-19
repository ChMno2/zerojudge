/*
取小數點第幾位fixed<<setprecision()
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	float n;
	while(cin>>n)
	{
		cout<<fixed<<setprecision(3)<<
		float((n-32)*5/9)<<endl;
	}
}
