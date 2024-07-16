#include <bits/stdc++.h>
using namespace std;
//next_permutation：
//使用已經排序(由小到大)的資料，產生下一組排列。
int main() {
    int N;
    cin>>N;
   	int a[N];
    for(int i=0;i<N;i++)
    {
    	a[i]=i+1; 
	}
    for(int i=0;i<N;i++)
    {
    	cout<<a[i]<<" "; 
	}
	cout<<'\n';

	while(next_permutation(a,a+N))
	{
	    for(int i=0;i<N;i++)
	    {
	    	cout<<a[i]<<" "; 
		}
		cout<<'\n';
	}
}
