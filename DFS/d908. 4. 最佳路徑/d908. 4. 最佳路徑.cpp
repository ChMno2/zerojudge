//輸入範例一
//B
//6
//A B 7
//A C 1
//B D 3
//B E 5
//C F 2
//D F 4
//輸出範例一
//7
#include<bits/stdc++.h>
using namespace std;
char start;
map<char,vector <pair<char,int> > > mp;

int func(int start,int total){
	if(!mp.count(start))return total;
	int maxi = 0;
	for(pair<char,int> p:mp[start]){
		maxi = max(func(p.first,total+p.second),maxi);
	} 
	return maxi;
}

int main()
{
	int num;
	while(cin>>start>>num){
		mp.clear();
		char a,b;
		int n;
		for(int i=0;i<num;i++){
			cin>>a>>b>>n;
			mp[a].push_back({b,n});
		}
		cout<<func(start,0)<<'\n';
	}
}
