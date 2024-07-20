#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,p;
	cin>>t;
	while(t--){
		
		cin>>n>>p;
		int arr[p];
		for(int i=0;i<p;i++){
			cin>>arr[i];
		}
		
		int dp[n+1]={0};
		dp[0]=1;
		for(int i=0;i<p;i++){
			for(int j=n;j>=arr[i];j--){
				if(dp[j-arr[i]])dp[j]=1;
			}
			
		}
		
		if(dp[n])cout<<"YES"<<'\n';
		else cout<<"NO"<<'\n';
	}
	
	
	
	
}
