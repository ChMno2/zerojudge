//範例輸入 #1
//1
//5 6 3 1 3 4
//000000
//011101
//000010
//011000
//000010
//範例輸出 #1
//4
#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;
	while(cin>>num){
		while(num--){
			int n,m,x1,y1,x2,y2;
			cin>>n>>m>>x1>>y1>>x2>>y2;
			x1--;
			y1--;
			x2--;
			y2--;
			
			int a[n][m];
			string str;
			for(int i=0;i<n;i++){
				cin>>str;
				for(int j=0;j<m;j++){
					a[i][j]=str[j]-'0';
				}
			}	
			
			int arr[n][m];
	//		紀錄每個座標是否已經走過及路徑長度
	//		初始值 -1：未曾到訪該座標
	//      > 0：從出發點到該座標的路徑長度	
			int dx[4]={0,0,1,-1};
			int dy[4]={1,-1,0,0};
			
			memset(arr,-1,sizeof(arr));
			queue<pair<int,int> > q;
			q.push({x1,y1});
			
			arr[x1][y1] = 1;
			while(!q.empty()){
				pair<int ,int > now;
				now = q.front();
				q.pop();
				for(int i=0;i<4;i++){
					int new_x = now.first+dx[i];
					int new_y = now.second+dy[i];
					if( new_x >= 0 && new_x < n && new_y >= 0 && new_y < m){
					//沒超過邊界 
						if(a[new_x][new_y]==0&&arr[new_x][new_y]==-1){
							//沒走過且可走
							q.push({new_x,new_y});
							arr[new_x][new_y]=arr[now.first][now.second] + 1; 
						}
					}
				}
			}
			if(arr[x2][y2] == -1)
				cout<<0<<'\n';
			else
				cout<<arr[x2][y2]<<'\n';
		}
	}
} 



