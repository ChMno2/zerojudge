#include<iostream>

using namespace std;
#define ll long long
#define for_(i,begin,end,step) for(int i = begin;i<end;i+=step)
void Qs(int left , int right , int* array)
{
    if(left>=right) return;
    int ileft = left;
    int iright = right;
    int middem = 0;
    int middemIndex = left;
    for_(i,ileft,iright+1,1) middem+=array[i];
    middem /= (iright+1) - ileft;
    while (ileft<iright)
    {
        for(iright;array[iright]>middem&&iright>=left;iright--);
        for(ileft;array[ileft]<middem&&ileft<=right;ileft++);
        if(ileft<iright)
        {
            int temp = array[ileft];
            array[ileft] = array[iright];
            array[iright] = temp;
        }
        else
        middemIndex = iright;
    }
    // for_(i,left,right+1,1)cout<<array[i]<<' ';
    // cout<<'\n';
    // system("PAUSE");
    Qs(left,middemIndex,array);
    Qs(middemIndex+1,right,array);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for_(i,0,n,1)cin>>a[i];
    Qs(0,n-1,a);
    for_(i,0,n,1)cout<<a[i]<<' ';
    cout<<'\n';
}