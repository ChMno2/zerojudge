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
