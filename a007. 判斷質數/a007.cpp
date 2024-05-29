/*
分成兩個部分處理
    1.小於46341的數字透過質數表(a[])來查詢
      建立質數表的同時，把質數存入vector v中
    2.大於46341的數字，測試其是否有「v」的任何因數,有的話就可以提早結束迴圈
*/
#include <bits/stdc++.h>
using namespace std;
bool a[46342]; // sqrt(2147483647)==46342
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    vector<int> v;
    for (int i = 2; i < 46342; i++)
    {
        if (!a[i])
        {
            v.push_back(i);
            for (int j = i * i; j < 46342; j += i)
            {
                a[j] = true;
            }
        }
    }
    while (cin >> n)
    {
        if (n > 46341)
        {
            m = sqrt(n);
            bool flag = true;
            for (int i : v)//檢查質數表
            {
                if (n % i == 0)
                {
                    flag = false; // 不是質數
                    cout << "非質數" << '\n';
                    break;
                }
            }
            if (flag)
                cout << "質數\n";
        }
        else
        {
            if (a[n])
                cout << "非質數\n";
            else
                cout << "質數\n";
        }
    }
    return 0;
}
