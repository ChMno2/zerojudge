/*
解題想法:因為罰金會受到工作天數的影響，因此罰金越少的要先做，花的天數少的也要先做，
因此我們可藉由自訂義的sort將資料兩兩比較，回傳[罰金*天數]較小的排前面
*/*/
#include<bits/stdc++.h>
using namespace std;
struct T
{
    int id;
    long long int day;
    long long int penalty;
};
bool bmp(struct  T R,struct T E)
{
    if(R.day*E.penalty==E.day*R.penalty)
        return R.id<E.id;
    else
        return R.day*E.penalty<E.day*R.penalty;
}
int main()
{
    int n,c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        cin>>c;
        vector<struct T> tasks;
        T task;
        for(int j=0;j<c;j++)
        {
            cin>>task.day>>task.penalty;
            task.id=j+1;
            tasks.push_back(task);
        }
        sort(tasks.begin(),tasks.end(),bmp);
        cout<<tasks[0].id;
        for(int j=1;j<c;j++)
        {
            cout<<" "<<tasks[j].id;
        }
        cout<<endl;
        
        
    }


}
